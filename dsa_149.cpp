#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> arr, int s, int e, int k){
    int res = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            res = mid;
            s = mid+1;
        }else if(arr[mid]>k){
            e=mid-1;
        }else if(arr[mid]<k){
            s=mid+1;
        }
    }
    int count = 0;
    while(res>=0){
        
        if(arr[res]==k){
            count++;
        }
        res--;
    }
    return count;
}

int main(){
    
    vector<int> arr = {1,2,4,4,4,4,4,4,4,7,8,9,11};
    int k;
    cin>>k;
    int n = arr.size();
    int index = binary(arr,0,n-1,k);
    cout<<index;
    
    return 0;
}