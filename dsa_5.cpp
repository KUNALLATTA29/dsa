

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    vector<int> arr;
    int n,inp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>inp;
        arr.push_back(inp);
    }
    map<int,int> arr1;
    for(auto it:arr){
        arr1[it]++;
    }
    int max=INT_MIN;
    int value;
    for(auto it:arr1){
        if(max<it.second){
            value =it.first;
            max=it.second;
        }else if(max==it.second){
            value=it.first;
            max=it.second;
        }
    }
    cout<<value<<" : "<<max;
    return 0;
}