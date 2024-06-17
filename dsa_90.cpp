#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="this is a test this is only a test";
    istringstream iss(s);
    string word;
    map<string,int> arr;
    while(iss>>word){   
        arr[word]++;
    }
    for(auto it:arr){
        cout<<it.first<<"="<<it.second<<endl;
    }
    
    return 0;
}