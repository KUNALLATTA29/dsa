#include<iostream>
using namespace std;

int main(){
    
    string a, b;
    
    cout<<"enter username: ";
    cin>>a;
    
    cout<<"enter password: ";
    cin>>b;
    
    
    if(a=="kunal" && b=="dhoom"){
        cout<<"active";
    }else{
        cout<<"try again";
    }
    
    return 0;
}