#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,2,1,2,1,0,0};
    int low=0, mid=0, high=arr.size()-1;
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}