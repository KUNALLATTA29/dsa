

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    string s="hello kunal hello babu junu babu";
    vector<string> words;
    istringstream iss(s);
    string word;
    while(iss>>word){
        words.push_back(word);
    }
    
    map<string,int>mapcount;
    for(auto it:words){
        mapcount[it]++;
    }
    for(auto it: mapcount){
        cout<<it.first<<" : "<<it.second<<endl;
    }
    
    
    return 0;
}