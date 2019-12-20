#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (1<=N<=100){
        if ( N%2 == 1){
            cout << "Weird";
        }else{
            if (2<=N && N<=5){
                cout << "Not Weird";
            }else if (6<=N && N<=20) {
                cout << "Weird";
            }else {
                cout << "Not Weird";
            }
        }
    }
    return 0;
}
