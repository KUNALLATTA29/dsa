
#include <iostream>
using namespace std;
int main()
{
    int tem;
    
    
    cout<<"enter temprature: ";
    cin>> tem;
    
    if(tem>=40){
        cout<<"HOT";
    }else if(tem>=20){
        cout<<"MODERATE";
    }else{
        cout<<"COLD";
    }
    
   
    
    return 0;
}