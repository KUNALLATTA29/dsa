#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>arr={1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,4,};
    map<int,int>k;
    for(auto it:arr){
        k[it]++;
    }
    for(auto it:k){
        cout<<it.first<<" : "<<it.second<<endl;
    }
}