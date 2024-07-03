#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<string,int> arr={
        {"maruti",1200},
        {"tata",3300},
        {"honda",5700},
        {"renault",6600},
        {"skoda",9900}
    };
    int price;
    for(auto it:arr){
        price+=it.second;
    }
    cout<<price/5;
    
    return 0;
}