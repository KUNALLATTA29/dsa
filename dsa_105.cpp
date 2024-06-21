#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> map1{
        {"kunal", 5000},
        {"Bob", 6000},
        {"sonu", 7000},
        {"dolly", 8000}
    };

    map<string, int> map2{
        {"Bob", 9000},
        {"dolly", 10000},
        {"kaka", 11000},
        {"sonu", 12000}
    };
    for(auto &it:map1){
        for(auto &k:map2){
            if(it.first==k.first){
                int temp=it.second;
                it.second=k.second;
                k.second=temp;
            }
        }
    }
    for(auto it:map1){
        cout<<it.first<<":"<<it.second<<endl;
    }
    cout<<endl;
    for(auto it:map2){
        cout<<it.first<<":"<<it.second<<endl;
    }


    return 0;
}