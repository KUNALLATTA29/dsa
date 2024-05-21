#include<iostream>
using namespace std;

int main(){
    
    char a;
    
    cout<<"enter a character: ";
    cin>>a;
    
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        cout<<"vowel";
    }else{
        cout<<"consonant";
    }
    
    
    return 0;
}