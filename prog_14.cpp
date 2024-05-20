
#include <iostream>
using namespace std;
int main()
{
    int otp;
    string pass;
    
    
    cout<<"enter password: ";
    cin>> pass;
    
    
    if(pass=="dhoom"){
        cout<<"you have access";
    }else{
        cout<<"enter recovery code: ";
        cin>>otp;
        if(otp==1234){
            cout<<"you have access";
        }else{
            cout<<"you don't have access";
        }
    }
    
   
    
    return 0;
}