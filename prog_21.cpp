#include<bits/stdc++.h>
using namespace std;

bool isvol(char s){
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        
        return true;
    }
    return false;
}

bool iscons(char s){
    s = tolower(s);
    return (isalpha(s) && !isvol(s));
}



int main(){
    
    set<int> set1 = {1,2,3,4,5};
    set<int> set2 = {4,5,6,7,8};
    char s;
    cin>>s;
    
    
    if(isvol(s)){
        vector<int> ans;
        set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),back_inserter(ans));
        for(auto it:ans){
            cout<<it<<" ";
        }
    }else if(iscons(s)){
        vector<int> ans;
        set_union(set1.begin(),set1.end(),set2.begin(),set2.end(),back_inserter(ans));
        for(auto it:ans){
            cout<<it<<" ";
        }
    }else{
        vector<int> ans;
        set_symmetric_difference(set1.begin(),set1.end(),set2.begin(),set2.end(),back_inserter(ans));
        for(auto it:ans){
            cout<<it<<" ";
        }
    }
    
    return 0;
}