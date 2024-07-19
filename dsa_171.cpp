#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    
    int index=1;
    for(int i=0;i<arr.size();i++){
        arr[index] = arr[index-1] + arr[index];
        index++;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    
    return 0;
}