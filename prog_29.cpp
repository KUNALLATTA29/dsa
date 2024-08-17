#include<bits/stdc++.h>
using namespace std;

void sol1(vector<int> arr){
    map<string,vector<int>> mymap;
    for(auto it:arr){
        if(it%5==0){
            mymap["multiple of 5"].push_back(it);
        }else{
            mymap["non multiple of 5"].push_back(it);
        }
    }
    for(auto it:mymap){
        cout<<it.first<<" ";
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
    
    vector<int> arr = {100, 200, 150, 300, 250, 400, 350,
    450, 500, 550, 600, 650, 
    700, 750, 800};
    
    long pro =1;
    
    for(auto it:arr){
        pro*=it;
    }
    
    
    if(pro>4000){
        sol1(arr);
    }else if(pro<4000){
        cout<<sol2(arr, 350);
    }else{
        cout<<sol3(arr, 600);;
    }
    return 0;
}