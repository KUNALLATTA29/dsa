#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {7,10,4,20,15};
    int k = 4;
    sort(arr.begin(),arr.end());
    
    cout<<arr[k-1];
    
    return 0;
}