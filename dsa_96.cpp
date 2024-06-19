#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={1,2,3,4,5};
    stack<int> s1;
    stack<int> s2;
    
    for(auto it:arr){
        s1.push(it);
    }
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    
    while(!s2.empty()){
        cout<<s2.top();
        s2.pop();
    }
    
   
    
    return 0;
}