#include <bits/stdc++.h>
using namespace std;
int main(){
    
    set<int> arr;
    int value;
    for(int i=0;i<5;i++){
        cin>>value;
        arr.insert(value);
    }
    cout<<"print elements in ascending order"<<endl;
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}