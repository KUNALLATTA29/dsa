

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    vector<int>arr={1,2,3,4,9};
    int n=10;
    
    map<int,int> arr1;
    
    for(int i=0;i<arr.size();i++){
        arr1[i]=arr[i];
    }
    set<int> k;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr1[i]+arr1[j]==n && i!=j){
                k.insert(i);
                k.insert(j);
                break;
            }
        }
    }
    for(auto it:k){
        cout<<it<<" ";
    }
    return 0;
}