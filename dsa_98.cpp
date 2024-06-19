#include<bits/stdc++.h>
using namespace std;


int main(){
    string arr={23,54,66,87,49,23};
    stack<int> s;
    for(auto it:arr){
        
        s.push(it);
        
    }
    int min=INT_MAX;
    while(!s.empty()){
        if(s.top()<min){
            min=s.top();
        }
        s.pop();
    }
    cout<<min;
    
    
   
    
    return 0;
}