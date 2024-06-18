#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={1,2,3,4,5};
    queue<int> arr1;
    
    for(auto it:arr){
        arr1.push(it);
    }
    
    while(!arr1.empty()){
        cout<<arr1.front();
        arr1.pop();
    }
    
   
    
    return 0;
}