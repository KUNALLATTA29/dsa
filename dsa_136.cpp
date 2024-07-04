#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,1,0,1,0,0,1,0,1} ;
    int left=0, right=arr.size()-1;
    
    while(left<right){
        if(arr[left]==1 && arr[right]==0){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }else if(arr[left]==0){
            left++;
        }else if(arr[right]==1){
            right--;
        }
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}