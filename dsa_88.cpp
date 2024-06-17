#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> arr;
    arr.insert({1,"one"});
    arr.insert({2,"two"});
    arr.insert({3,"three"});
    arr.insert({4,"four"});
    arr.insert({5,"five"});
    
    arr.erase(3);
    
    if(arr.find(4)!=arr.end()){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    for(auto it:arr){
        cout<<it.first<<"="<<it.second<<" ";
    }
    cout<<endl;
    
    return 0;
}