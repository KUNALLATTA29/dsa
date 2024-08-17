#include<bits/stdc++.h>
using namespace std;

int sol1(vector<int> arr){
    int k=0;
    for(auto it:arr){
        if(it%50==0){
            k++;
        }
    }
    return k;
}

int sol2(vector<int> arr, int num){
    int k=0;
    for(auto it:arr){
        if(it==num){
            k++;
        }
    }
    return k;
}

void sol3(vector<int> &arr){
    for(auto it:arr){
        it=it+10;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    
}

int main(){
    
    vector<int> arr = {100, 200, 150, 300, 250, 400, 350,
    450, 500, 550, 600, 650, 
    700, 750, 800, 850, 900, 950, 1000, 1050};
    
    double sum =0;
    
    for(auto it:arr){
        sum+=it;
    }
    
    
    if(sum>30000){
        cout<<sol1(arr);
    }else if(sum<30000){
        cout<<sol2(arr, 100);
    }else{
        sol3(arr);
    }
    return 0;
}