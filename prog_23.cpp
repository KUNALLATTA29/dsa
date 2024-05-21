
#include <iostream>
using namespace std;
int main()
{
    int a;
    
    
    cout<<"enter total ammount: ";
    cin>> a;
    
    if(a>30000){
        cout<<"final amount is: "<<a - (a*0.15);
    }else if(a>20000){
        cout<<"final amount is: "<<a - (a*0.10);
    }else if(a>10000){
        cout<<"final amount is: "<<a - (a*0.05);
    }else{
        cout<<"final amount is: "<<a;
    }
    
    
   
    return 0;
}