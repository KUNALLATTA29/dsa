#include<bits/stdc++.h>
using namespace std;


int main(){
    string s="(()))";
    stack<char> arr;
    
    for(auto it:s){
        
        if(!arr.empty() && arr.top()=='(' && it==')'){
            arr.pop();
        }else{
            arr.push(it);
        }
    }
        if(arr.empty()){
            cout<<"balanced";
        }else{
            cout<<"unbalanced";
        }
    
   
    
    return 0;
}