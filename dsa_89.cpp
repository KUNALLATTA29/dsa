#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string,greater<int>> arr;
    arr.insert({1,"one"});
    arr.insert({2,"two"});
    arr.insert({3,"three"});
    
    
  
    
    for(auto it:arr){
        cout<<it.first<<"="<<it.second<<" ";
    }
    cout<<endl;
    
    return 0;
}