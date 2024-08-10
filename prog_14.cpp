#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        
        stack<char> arr;
        for(auto it : s) {
            if(it == '(' || it == '{' || it == '[') {
                arr.push(it);
            } else {
                if(arr.empty()) return false;
                char top = arr.top();
                if((top == '(' && it == ')') ||
                   (top == '{' && it == '}') ||
                   (top == '[' && it == ']')) {
                    arr.pop();
                } else {
                    return false;
                }
            }
        }
        return arr.empty();
    }
int main(){
    
    string s = "()[]{}";
    
    if(isValid(s)){
        cout<<"it's valid";
    }else{
        cout<<"it's not valid";
    }
    
   
    return 0;
}
