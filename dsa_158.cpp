#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {0,2,1,2,0};
    
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    
    for(auto it:arr){
        if(it==0){
            c0++;
        }else if(it==1){
            c1++;
        }else if(it==2){
            c2++;
        }
    }
    for(int i=0;i<c0;i++){
        arr[i]=0;
    }
    for(int i=c0;i<c1+c0;i++){
        arr[i]=1;
    }
    for(int i = c1+c0;i<arr.size();i++){
        arr[i]=2;
    }
    
    for(auto it:arr){
        cout<<it<<" ";
    }
    
    return 0;
}