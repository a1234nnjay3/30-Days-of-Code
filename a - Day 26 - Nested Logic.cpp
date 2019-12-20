#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    while(cin>>n){
        v.push_back(n);
    }
    if (v[2]>v[5]){
        cout << 10000;
    }else if (v[2]<v[5]){
        cout << 0;
    }else{
        if (v[1]>v[4]){
            cout << 500*(v[1]-v[4]);
        }else if (v[1]<v[4]){
            cout << 0;
        }else{
            if (v[0]>v[3]){
                cout << 15*(v[0]-v[3]);
            }else if (v[0]<=v[3]){
                cout << 0;
            }
        }
    }
    return 0;
}
