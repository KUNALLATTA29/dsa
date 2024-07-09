#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> arr, int s, int e, int k){
    
    if(s<=e){
        int mid = (s+e)/2;
        
        if(arr[mid]>k){
            return binary(arr,s,mid-1,k);
        }else if(arr[mid]<k){
            return binary(arr,mid+1,e,k);
        }else if(arr[mid]==k){
            return mid;
        }
    }
    return -1;
}

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,8,9,11};
    int k;
    cin>>k;
    int n = arr.size();
    int index = binary(arr,0,n-1,k);
    cout<<index;
    
    return 0;
}