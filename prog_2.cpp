#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6};
    vector<int> arr1;
    for(int i=arr.size()-1;i>=0;i--){
        arr1.push_back(arr[i]);
    }
    
    for(auto it:arr1){
        cout<<it<<" ";
    }
    return 0;
}