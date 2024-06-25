#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<string,int>arr={
        {"kunal",2200},
        {"babu",1300},
        {"lalu",4400},
        {"dolly",5200},
        {"mamu",1200},
        {"don",2300}
    };
    
    set<pair<int,string>> setu;
    
    for(auto it:arr){
        setu.insert({it.second, it.first});
    }
    for(auto it:setu){
        cout<<it.second<<":"<<it.first<<endl;
    }
    
    return 0;
}