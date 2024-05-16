#include <bits/stdc++.h>
using namespace std;
vector<int> rev(vector<int> &arr, int st, int en){
    
    if(st>=en){
        return arr;
    }
    
    int temp =arr[st];
    arr[st]=arr[en];
    arr[en]=temp;
    rev(arr,++st,--en);
        
    return arr;
    
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int a=arr.size();
    int st=0;
    int en=a-1;
    rev(arr, st, en);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}