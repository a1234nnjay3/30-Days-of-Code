#include <bits/stdc++.h>

using namespace std;

tuple<vector<int>, int> BubbleSort(vector<int> v, int n, int num_swaps){
    for (int i=0; i<n; i++){
        int swap_in_loop = 0;
        for (int j=0;j<n-1;j++){
            if (v[j]>v[j+1]){
                std::swap(v[j],v[j+1]);
                swap_in_loop+=1;
                num_swaps+=1;
            }
        }
        if (swap_in_loop==0){
            break;
        }
    }
    return {v, num_swaps};
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    int num_swaps;
    tie(a, num_swaps) = BubbleSort(a, n, num_swaps);
    cout << "Array is sorted in " << num_swaps <<" swaps." << endl;
    cout << "First Element: "<< a[0] << endl;
    cout << "Last Element: "<< a[n-1] << endl;
    // Write Your Code Here
    return 0;
}

