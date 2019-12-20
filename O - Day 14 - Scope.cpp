#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;
    Difference(vector<int> input){
        elements = input;
    }
    void computeDifference(){
        int min_element=100, max_element=0;
        for (int i=0; i< elements.size(); i++){
            if (elements[i]<min_element){
                min_element = elements[i];
            }
            if (elements[i]>max_element){
                max_element = elements[i];
            }
        }
        maximumDifference = max_element - min_element;
    }
    // Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}