#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> po;
        vector<int> ne;
        
        for(int i=0;i<arr.size();i++){
          if(arr[i]<0){
              ne.push_back(arr[i]);
            }else{
               po.push_back(arr[i]); 
            } 
        }
        
        int ind=0;
        
        for(int i=0;i<po.size();i++){
            arr[ind++]=po[i];
        }
        for(int i=0;i<ne.size();i++){
            arr[ind++]=ne[i];
        }
    }
};