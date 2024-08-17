#include<bits/stdc++.h>
using namespace std;

void sol1(vector<int> arr){
    map<string,vector<int>> mymap;
    for(auto it:arr){
        if(it>0){
            mymap["positive"].push_back(it);
        }else{
            mymap["negative"].push_back(it);
        }
    }
    for(auto it:mymap){
        cout<<it.first<<" : ";
        for(auto k:it.second){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}

int sol2(vector<int> arr, int num){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
    
}

int sol3(vector<int> arr, int num){
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
    
}

int main(){
    
    vector<int> arr = {1,200,3,-4,5,6,7,-8,9,10};
    int pro=1;
    for(auto it:arr){
        pro*=it;
    }
    
    if(pro>100){
        sol1(arr);
        
    }else if(pro<100){
        cout<<sol2(arr, 5);
    }else{
        cout<<sol3(arr,9);
    }
    
    return 0;
}