#include <bits/stdc++.h>
using namespace std;
int main(){
    
    set<int> arr={2,4,6,8,10};
    cout<<"set before erase operation"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    if(arr.find(6)!=arr.end()){
        arr.erase(6);
    }
    
    cout<<"set after erase operation"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}