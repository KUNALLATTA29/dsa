#include<bits/stdc++.h>
using namespace std;
bool isprime(int num){
    if(num<=1){
        return false;
    }
    
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    
    return true;
}

int main(){
    
    vector<int> arr={3,5,6,2,8,10,15,18};
    
    map<string,vector<int>> arr2;
    
    for(auto it: arr){
        if(isprime(it)){
            arr2["prime"].push_back(it);
        }else{
            arr2["not prime"].push_back(it);
        }
    }
    
    for(auto it:arr2){
        cout<<it.first<<" = ";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}