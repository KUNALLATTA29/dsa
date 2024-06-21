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
    string j;
    for(int i=0;i<3;i++){
        cin>>j;
        if(arr.find(j)!=arr.end()){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}