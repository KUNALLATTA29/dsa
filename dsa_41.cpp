#include <bits/stdc++.h>
using namespace std;
int main(){
    
    set<int> set1={1,2,3,4,5};
    set<int> set2={4,5,6,7,8};
    vector<int> set3(set1.size()+set2.size());
    auto it=set_union(set1.begin(),set1.end(),set2.begin(),set2.end(),set3.begin());
    set3.resize(it-set3.begin());
    cout<<"union of sets"<<endl;
    for(auto it:set3){
        cout<<it<<" ";
    }
    cout<<endl;
    
    vector<int> set4(set1.size()+set2.size());
    auto k=set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),set4.begin());
    set4.resize(k-set4.begin());
    cout<<"intersection of sets"<<endl;
    for(auto it:set4){
        cout<<it<<" ";
    }
    return 0;
}