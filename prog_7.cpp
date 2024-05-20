
#include <iostream>
using namespace std;
int main()
{
    string username, password;
    int otp;
    
    
    cout<<"enter username: ";
    cin>> username;
    
    cout<<"enter password: ";
    cin>> password;
   
    
   if(username=="kunal" & password=="dhoom"){
       cout<<"enter otp: ";
       cin>>otp;
       if(otp==1234){
           cout<<"login done";
       }else{
           cout<<"invalid otp";
       }
   }else{
       cout<<"invalid inputs";
   }
    
    return 0;
}