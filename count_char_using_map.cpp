#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s="prajjalanish";
    unordered_map<char,int>k;
    for(auto it:s){
        k[it]++;
    }
    for(auto it:k){
        cout<<it.first<<" : "<<it.second<<endl;
    }
}