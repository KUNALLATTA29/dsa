#include<bits/stdc++.h>
using namespace std;

int sol1(vector<int> arr, int num){
    int k=0;
    for(auto it:arr){
        if(it==num){
            k++;
        }
    }
    return k;
}
bool sol2(set<int> arr, int num){
    return arr.find(num)!=arr.end();
}

string sol3(int num){
    if(num%2==0){
        return "even";
    }
    return "odd";
}

int main(){
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int sum = a+b+c+d;
    
    if(sum<0){
        vector<int> arr = {1,2,3,4,3,7,8};
        cout<<sol1(arr, a);
    }else if(sum>0){
        set<int> arr = {1,2,3,4,5,6};
        if(sol2(arr,b)){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }else{
        int x;
        cin>>x;
        cout<<sol3(x);
    }
    
    return 0;
}