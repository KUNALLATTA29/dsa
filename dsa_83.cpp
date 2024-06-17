#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> arr;
    arr.insert(1);
    arr.insert(2);
    arr.insert(3);
    arr.insert(4);
    arr.insert(5);
    
    arr.erase(3);
    
    if(arr.find(4)!=arr.end()){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}