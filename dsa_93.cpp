#include<bits/stdc++.h>
using namespace std;


int main(){
    string s="abbaca";
    stack<char> arr;
    
    for(auto it:s){
        
        if(!arr.empty() && arr.top()==it){
            arr.pop();
        }else{
            arr.push(it);
        }
    }
    stack<char> arr2;
    while(!arr.empty()){
        arr2.push(arr.top());
        arr.pop();
    }
    while(!arr2.empty()){
        cout<<arr2.top();
        arr2.pop();
    }
    
    return 0;
}