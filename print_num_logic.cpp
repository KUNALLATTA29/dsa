#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,1,5,8,7};
    vector<int> arr2;
    
    for(int i=0;i<arr.size();i++){
        if(i==0){
            arr2.push_back(arr[i]+arr[arr.size()-1]);
        }
        else{
            arr2.push_back(arr[i]+arr[i-1]);
        }
    }
    for(auto it:arr2){
        cout<<it<<" ";
    }
}