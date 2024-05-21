#include <iostream>

using namespace std;

int main(){
    
    int a;
    cout<<"enter year: ";
    cin>> a;
    
    if(a%400==0){
        cout<<"this is a leap year";
    }else if(a%100==0){
        cout<<"this is not a leap year";
    }else if(a%4 == 0){
        cout<<"this is a leap year";
    }else{
        cout<<"this is not a leap year";
    }
    
    return 0;
}