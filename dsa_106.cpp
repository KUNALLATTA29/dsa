#include <bits/stdc++.h>
using namespace std;

int main() {
    
    map<string,int>arr={
        {"kunal",2200},
        {"babu",1300},
        {"lalu",4400},
        {"dolly",2200},
        {"mamu",1300},
        {"don",2200}
    };
    
    map<int,int> arr2;
    
    for(auto it: arr){
        int k=it.second;
        arr2[k]++;
    }
    for(auto it: arr2){
        cout<<it.first<<":"<<it.second<<endl;
    }
    
    return 0;
}