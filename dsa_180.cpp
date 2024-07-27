#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,8};
    
    vector<vector<int>> res;
    
    for(int i = 0; i<arr.size(); i++){
        
        for(int j = i; j<arr.size(); j++){
            
            vector<int> subarray;
            
            for(int k = i; k<=j; k++){
                subarray.push_back(arr[k]);
            }
            
            res.push_back(subarray);
        }
    }
    
    for(auto it: res){
        for(auto k:it){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
