
#include <iostream>
using namespace std;
int main()
{
    int a;
    
    
    cout<<"enter total tax amount: ";
    cin>> a;
    
    int b;
    cout<<"choose one - is your income less than (100000:1 , 200000:2, 30000:3): ";
    cin>>b;
    
    
    if(b==3){
        cout<<"final tax is: "<<a - (a*0.25);
    }else if(b==1){
        cout<<"final tax is: "<<a - (a*0.15);
    }else if(b==2){
        cout<<"final amount is: "<<a - (a*0.10);
    }else{
        cout<<"final amount is: "<<a;
    }
    
    
   
    return 0;
}