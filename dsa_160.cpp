#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr1 = {1,2,3,4,5};
    
    vector<int> arr2 = {1,2,3};
    
    vector<int> uniset = {};
    vector<int> inset = {};
    
    set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(inset));
    set_union(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),back_inserter(uniset));
    
    for(auto it:inset){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:uniset){
        cout<<it<<" ";
    }
    
    return 0;
}