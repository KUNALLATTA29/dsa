#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<string,int> arr={
        {"kunal",66},
        {"kumar",45},
        {"nobita",80},
        {"kaliya",70},
        {"komal",110}
    };
    vector<pair<int,string>> arr2;
    for(auto it:arr){
        arr2.push_back({it.second,it.first});
    }
    sort(arr2.rbegin(),arr2.rend());
    for(auto it:arr2){
        cout<<it.second<<"="<<it.first<<endl;
    }
    
    return 0;
}