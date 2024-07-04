#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<string> arr={"apple","kela","kunal","damru","jagu","aalu","dog","king"};
    
    map<char,vector<string>> arr2;
    
    for(auto it:arr){
        char s =it[0];
        arr2[s].push_back(it);
    }
    for(auto it:arr2){
        cout<<it.first<<"=";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}