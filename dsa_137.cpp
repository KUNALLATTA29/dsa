#include<bits/stdc++.h>
using namespace std;

bool iseven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,8,9} ;
    int left=0, right=arr.size()-1;
    
    while(left<right){
        if(!iseven(arr[left]) && iseven(arr[right])){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }else if(iseven(arr[left])){
            left++;
        }else if(!iseven(arr[right])){
            right--;
        }
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}