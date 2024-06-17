#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> age={34,23,12,55,43,22};
    vector<string> names={"kunal", "babu","dhami", "modi", "kaku", "damru"};
    map<int,string,greater<int>> arr;
    for(int i=0;i<age.size();i++){
        arr[age[i]]=names[i];
    }
    for(auto it:arr){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    
    return 0;
}