#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>arr{
        {"kunal",2200},
        {"babu",3300},
        {"lala",5500},
        {"jagu",3455},
        {"damru",6600}
    };
    int inc;
    cin>>inc;
    for(auto &it:arr){
        it.second+=(it.second*inc/100);
    }
    for(auto it:arr){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    return 0;
}