#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> arr1={1,2,3,4,5,6,7};
    set<int> arr2={1,2,8,9,12,33,44,54};
    
    set<int> diff,sysdiff;
    
    set_difference(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(diff,diff.begin()));
    set_symmetric_difference(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(sysdiff,sysdiff.begin()));
    for(auto it:diff){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:sysdiff){
        cout<<it<<" ";
    }
    
    return 0;
}