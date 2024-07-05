#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,3,5,7,9};
    sort(arr.begin(),arr.end());
    int minsum =0;
    int maxsum =0;
    for(int i=1;i<arr.size();i++){
        maxsum +=arr[i];
    }
    for(int i=0;i<arr.size()-1;i++){
        minsum += arr[i];
    }
    cout<<minsum<<" "<<maxsum;
    
    
    return 0;
}