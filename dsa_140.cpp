#include<bits/stdc++.h>
using namespace std;

int binary(vector<int> arr, int key){
    
    int n = arr.size();
    int s = 0;
    int e = n-1;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]>key){
            e=mid-1;
        }else if(arr[mid]<key){
            s=mid+1;
        }else {
            return mid;
        }
        
    }
    return -1;
}
int main(){
    
    vector<int> arr = {1,3,4,5,9,12,22,38,45};
    int key = 38;
    
    cout<<binary(arr,key);
    
    return 0;
}