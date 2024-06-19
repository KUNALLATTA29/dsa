#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr1={1,2,3,4,5};
    queue<int> arr;
    stack<int> s1;
    for(auto it:arr1){
        arr.push(it);
    }
    while(!arr.empty()){
        s1.push(arr.front());
        arr.pop();
    }
    while(!s1.empty()){
        cout<<s1.top();
        s1.pop();
    }
    
    
   
    
    return 0;
}