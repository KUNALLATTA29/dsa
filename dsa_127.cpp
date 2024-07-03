#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>height={10,4,15,11,5,34,12,61,23,1,24,29};
    
    map<string,vector<int>> arr;
    
    for(auto it:height){
        if(it<=10){
            arr["short"].push_back(it);
        }else if(it<=20){
            arr["average"].push_back(it);
        }else{
            arr["tall"].push_back(it);
        }
    }
    
    for(auto it:arr){
        cout<<it.first<<"=";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}