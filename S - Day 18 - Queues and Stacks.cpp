#include <iostream>

using namespace std;

class Solution {
private:
    int maxstacksize = 100;
    char* stack = new char[maxstacksize];
    int top = -1;
    char* queue = new char[maxstacksize];
    int front = -1;
    int rear = -1;
public:
    //Write your code here
    void pushCharacter(char ch){
        if (StackisFull()){
            throw "StackisFull";
        }else{
            stack[++top] = ch;
        }
    }

    void enqueueCharacter(char ch){
        if (QueueisFull()){
            throw "QueueisFull";
        }else{
            queue[++rear] = ch;
        }
    }

    char popCharacter(){
        if (StackisEmpty()){
            throw "StackisEmpty";
        }else{
            char x = stack[top--];
            return x;
        }
    }

    char dequeueCharacter(){
        if (QueueisEmpty()){
            throw "QueueisEmpty";
        }else{
            char x = queue[++front];
            return x;
        }
    }

    bool StackisFull(){
        if (top==maxstacksize-1){
            return true;
        }
        return false;
    }

    bool StackisEmpty(){
        if (top==-1){
            return true;
        }
        return false;
    }

    bool QueueisFull(){
        if (rear==maxstacksize-1){
            return true;
        }
        return false;
    }

    bool QueueisEmpty(){
        if (front==rear){
            return true;
        }
        return false;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

    // create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}