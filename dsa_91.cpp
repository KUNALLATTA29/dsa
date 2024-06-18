#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="kunal";
    stack<char> arr ;
    for(auto it:s){
        arr.push(it);
    }
    while(!arr.empty()){
        cout<<arr.top();
        arr.pop();
    }
    
    return 0;
}