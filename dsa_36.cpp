#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    vector<vector<int>> arr1(2);
    for(auto it:arr){
        if(it%2==0){
            arr1[0].push_back(it);
        }else{
            arr1[1].push_back(it);
        }
    }
    for(auto it: arr1[0]){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it: arr1[1]){
        cout<<it<<" ";
    }
}