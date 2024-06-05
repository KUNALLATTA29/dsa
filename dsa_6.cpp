

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    vector<int> arr={1,2,2,2,3,4,4,4,5,5,5,5,5,6,6};
    int n=2;
    
    map<int,int> arr1;
    for(auto it:arr){
        arr1[it]++;
    }
    vector<int>k;
    for(auto it:arr1){
        if(it.second<=n){
            k.push_back(it.first);
        }
    }
    for(auto it:k){
        arr1.erase(it);
    }
    for(auto it:arr1){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}