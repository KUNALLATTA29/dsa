

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    string arr="kunallattaistoocool";
    
    map<char,int> arr1;
    for(char it:arr){
        arr1[it]++;
    }
    
    for(auto it:arr1){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    return 0;
}