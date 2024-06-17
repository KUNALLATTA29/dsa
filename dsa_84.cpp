#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> arr1={1,2,3,4,5,6,7};
    set<int> arr2={1,2,8,9,12,33,44,54};
    
    set<int> uni,inter;
    
    set_union(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(uni,uni.begin()));
    set_intersection(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),inserter(inter,inter.begin()));
    for(auto it:uni){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:inter){
        cout<<it<<" ";
    }
    
    return 0;
}