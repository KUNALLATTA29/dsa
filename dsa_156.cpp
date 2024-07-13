#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7};
    
    sort(arr.begin(),arr.end());
    cout<<arr[0]<<endl;
    
    sort(arr.begin(),arr.end(),greater<int>());
    
    cout<<arr[0];
    
    return 0;
}