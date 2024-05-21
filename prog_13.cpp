#include<iostream>
using namespace std;

int main(){
    
    int a;
    
    cout<<"enter age: ";
    cin>>a;
    
    if(a<=16){
        cout<<"child";
    }else if(a<=25){
        cout<<"teenager";
    }else if(a<=50){
        cout<<"adult";
    }else{
        cout<<"senior";
    }
    
    
    return 0;
}