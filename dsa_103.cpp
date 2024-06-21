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
    for(int i=0;i<3;i++){
        cin>>sal;
        for(auto it:arr){
            if(it.second==sal){
                cout<<it.first<<" : "<<it.second<<endl;
                break;
            }
        }
    }
    return 0;
}