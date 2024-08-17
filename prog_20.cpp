#include<bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> set1 = {10, 20, 23, 40, 50, 60, 89};
    set<int> set2 = {50,60,89};
    
    if(includes(set1.begin(),set1.end(),set2.begin(),set2.end())){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    return 0;
}