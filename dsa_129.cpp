#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> arr={
        {"banana",13},
        {"apple",9},
        {"mango",24},
        {"kiwi",32},
        {"orange",19}
    };
    int max=INT_MIN;
    string fruit;
    for(auto it:arr){
        if(it.second>max){
            max=it.second;
            fruit=it.first;
        }
    }
    
    cout<<fruit<<" : "<<max;
    return 0;
}