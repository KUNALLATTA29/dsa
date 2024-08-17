#include<bits/stdc++.h>
using namespace std;

int sol1(vector<int> arr){
    int k=0;
    for(auto it:arr){
        if(it>75){
            k++;
        }
    }
    return k;
}

int sol2(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]<25){
            return i;
        }
    }
    return -1;
}

int sol3(vector<int> arr){
    int k=0;
    for(auto it:arr){
        k+=it;
    }
    return k;
}

int main(){
    
    vector<int> arr = {60, 80, 45, 30, 90, 20, 55, 70, 
    85, 40, 25, 50, 65, 75, 35, 95, 10, 5, 15, 
    100, 110, 120, 130, 140, 150};
    
    double sum =0;
    
    for(auto it:arr){
        sum+=it;
    }
    double ave = sum/arr.size();
    if(ave>50){
        cout<<sol1(arr);
    }else if(ave<50){
        cout<<sol2(arr);
    }else{
        cout<<sol3(arr);
    }
    return 0;
}