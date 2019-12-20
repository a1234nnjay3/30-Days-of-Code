#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string word;
    int n, word_len;
    cin >> n;
    cin.ignore();
    while (n>0){
        getline (cin, word);
        word_len = word.length();
        for (auto i=0; i<word_len; i=i+2){
            cout << word[i];
        }
        cout << " ";
        for (auto i=1; i<word_len; i=i+2){
            cout << word[i];
        }
        n-=1;
        cout << "\n";
    }
    return 0;
}
