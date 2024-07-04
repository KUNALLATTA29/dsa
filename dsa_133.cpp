#include<bits/stdc++.h>
using namespace std;

int main(){
    
    map<string,int> arr={
        {"kunal",88},
        {"raju",90},
        {"kaliya",40},
        {"jagu",70},
        {"kela",75}
    };
    map<string,vector<string>> arr2;
    
    for(auto it:arr){
        if(it.second<75){
            arr2["below 75"].push_back(it.first);
        }else{
            arr2["above 75"].push_back(it.first);
        }
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