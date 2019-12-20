#include <bits/stdc++.h>
#include <vector>

using namespace std;

// void print_vector(const vector<int> & v)
// {
//     cout << " [ ";
//     for (const auto & elem : v)
//     {
//         cout << elem << " ";
//     }
//     cout << "]" << endl;
// }

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> binary;
    while(n>0){
        binary.push_back(n%2);
        n = n/2;
    }
    // print_vector(binary);
    int count=0;
    int longest_1s=0;
    for (int elem : binary){
        if (elem==1){
            count+=1;
        }else{
            longest_1s = max(count, longest_1s);
            count=0;
        }
    }
    cout << max(longest_1s,count);
    return 0;
}
