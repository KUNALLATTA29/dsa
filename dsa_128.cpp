#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> arr={
        {"india",9999},
        {"china",8989},
        {"uk",2477},
        {"usa",3895},
        {"nepal",1089}
    };
    int max=INT_MIN;
    string con;
    for(auto it:arr){
        if(it.second>max){
            max=it.second;
            con=it.first;
        }
    }
    
    cout<<con<<" : "<<max;
    return 0;
}