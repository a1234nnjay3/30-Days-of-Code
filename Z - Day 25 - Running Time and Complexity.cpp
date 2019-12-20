#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void test_prime(const int& n){
    if (n==1){
        cout << "Not prime" << endl;
    }
    else{
        bool prime = true;
        for (int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                prime = false;
                break;
            }
        }
        cout << (prime ? "Prime" : "Not prime") << endl;
    }
}

int main() {
    int T,n;
    cin >> T;
    while (T-- > 0){
        cin >> n;
        test_prime(n);
    }
    return 0;
}
