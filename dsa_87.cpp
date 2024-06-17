#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> arr;
    arr.insert(1);
    arr.insert(2);
    arr.insert(2);
    arr.insert(3);
    arr.insert(2);
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<arr.count(2);
    
    return 0;
}