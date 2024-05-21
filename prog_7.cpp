#include<iostream>
using namespace std;

int main(){
    
    string a;
    
    cout<<"enter signal: ";
    cin>>a;
    
    
    
    if(a=="red"){
        cout<<"green";
    }else if(a=="green"){
        cout<<"yellow";
    }else if(a=="yellow"){
        cout<<"red";
    }else{
        cout<<"invalid input";
    }
    
    return 0;
}