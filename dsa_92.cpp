#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=4895;
    stack<int> arr;
    
    while(n!=0){
        int tem=n%10;
        arr.push(tem);
        n/=10;
    }
    
    int di=0,rev=0,mult=1,tem=0;
    while(!arr.empty()){
        di=arr.top();
        arr.pop();
        tem=di*mult;
        rev=rev+tem;
        mult*=10;
        
    }
    cout<<rev;
    
    return 0;
}