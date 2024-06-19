#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,char> arr={
        {"kunal",'m'},
        {"babu",'m'},
        {"rani",'f'},
        {"chacha",'m'},
        {"dolly",'f'}
    };
    vector<string> name;
    vector<char> gender;
    for(auto it:arr){
        name.push_back(it.first);
        gender.push_back(it.second);
    }
    for(auto it: name){
        cout<<it<<endl;
    }
    for(auto it: gender){
        cout<<it<<endl;
    }
    
    
    return 0;
}