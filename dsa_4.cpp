

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    vector<int> arr={1,2,2,1,3,4,3,4,4,4};
    map<int,int> arr1;
    for(auto it:arr){
        arr1[it]++;
    }
    for(auto it:arr1){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}