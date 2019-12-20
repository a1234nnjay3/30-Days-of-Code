#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<sstream>
#include <map>
#include <string>
using namespace std;

// bool check_map(map<string,int> &m, string name){
//     for (auto it=m.begin(); it != m.end(); it++){
//         if (name==(*it).first){
//             return true;
//         }
//     }
//     return false;
// }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    map<string,int> phonebook;
    string sentence;

    cin >> n;
    cin.ignore();
    // for (int i = 0; i < N; i++) {
    //     cin >> name;

    //     if (!phone_book[name]) {
    //         cin >> phone_book[name];
    //     }
    // }
    // https://www.cnblogs.com/grandyang/p/4858559.html
    for (int i=1;i<=n;i++){
        getline(cin, sentence);
        istringstream input(sentence);
        string s;
        vector<string> v;
        while (input >> s){
            v.push_back(s);
        }
        phonebook[v[0]]=stoi(v[1]);
    }
    string name;
    while(cin>>name){
        if (phonebook[name]){
            cout << name<<"="<<phonebook[name]<<endl;
        }else{
            cout << "Not found" << endl;
        }

    }
    // Method 2
    // string t;
    // while (getline(in, t, ' ')) {
    //     v.push_back(t);
    // }

    return 0;
}

