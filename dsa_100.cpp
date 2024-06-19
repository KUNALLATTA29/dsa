#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> num={2, 7, 10, 5, 12, 3, 9, 8, 11};
    map<string,vector<int>> arr;
    for(int i=0;i<num.size();i++){
        if(num[i]>9){
            arr["greater than 9"].push_back(num[i]);
        }else if(num[i]>8){
            arr["greater than 8"].push_back(num[i]);
        }else if(num[i]>5){
            arr["greater than 5"].push_back(num[i]);
        }
    }
    for(auto it:arr){
        cout<<it.first<<" : ";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}