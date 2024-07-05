#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr={3 ,2 ,1 ,3};
    
    int a=arr[0];
    
    for(auto it:arr){
        if(it>a){
            a=it;
        }
    }
    int k = count(arr.begin(),arr.end(),a);
    cout<<k;
    
    
    return 0;
}