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
    int sal;
    vector<int> arr2;
    for(int i=0;i<3;i++){
        cin>>sal;
        arr2.push_back(sal);
    }
    vector<string> rem;
    for(auto it:arr2){
        for(auto &k:arr){
            if(k.second==it){
                rem.push_back(k.first);
            }
        }
    }
    
    for(auto &it:rem){
        arr.erase(it);
    }
    for(auto it:arr){
        cout<<it.first<<":"<<it.second<<endl;
    }
    
    
    
    return 0;
}