#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> arr1={1,2,3,4};
    set<int> arr2={2,3};
    
    if(includes(arr1.begin(),arr1.end(),arr2.begin(),arr2.end())){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}