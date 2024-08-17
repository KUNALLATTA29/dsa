#include<bits/stdc++.h>
using namespace std;

int sol1(vector<int> arr){
    int k =0;
    for(auto it:arr){
        if(it%2==0){
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
        it=it+5;
    }
    
}

int main(){
    
    vector<int> arr = {100,500,1000,800,200,1200,100,300,250,330,450,120};
    long sum =0;
    for(auto it:arr){
        sum+=it;
    }
    
    if(sum>1000){
        cout<<sol1(arr);
    }else if(sum<1000){
        cout<<sol2(arr, 100);
    }else{
        sol3(arr);
        for(auto it:arr){
            cout<<it<<" ";
        }
    }
    
    return 0;
}