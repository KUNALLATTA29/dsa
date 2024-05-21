#include<iostream>
using namespace std;

int main(){
    
    int a;
    cout<<"how many characters in password: ";
    cin>>a;
    
    char b;
    cout<<"is there any uppercase: (y/n) ";
    cin>>b;
    
    char c;
    cout<<"is there any number: (y/n) ";
    cin>>c;
    
    
    if(a>12 && b=='y' && c=='y'){
        cout<<"this is strong password";
    }else{
        cout<<"this is very weak";
    }
    
    
    return 0;
    
   
   
}