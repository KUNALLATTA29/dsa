#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> num={3,4,1,5,2,11,9,10,7};
    int max1=0,max2=0;
    
    for(auto it:num){
        if(max1<it){
            max2=max1;
            max1=it;
        }else if(max2<it){
            max2=it;
        }
    }
    
    cout<<max2;
    
    return 0;
}