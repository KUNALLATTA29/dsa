#include<bits/stdc++.h>
using namespace std;

bool sol(set<int> arr, int num){
    return arr.find(num) != arr.end(); 
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;
    
    int maxi = max({a,b,c});
    
    if(maxi==a){
        set<int> set1 = {1,2,3,4,5,6};
        if(sol(set1, a)){
            cout<<a<<" is in set.";
        }else{
            cout<<a<<" is not in set.";
        }
    }else if(maxi==b){
        set<int> set1 = {1,2,3,4,5,6};
        if(sol(set1, b)){
            cout<<b<<" is in set.";
        }else{
            cout<<b<<" is not in set.";
        }
    }else{
        set<int> set1 = {1,2,3,4,5,6};
        if(sol(set1, c)){
            cout<<c<<" is in set.";
        }else{
            cout<<c<<" is not in set.";
        }
    }
    
    
    return 0;
}