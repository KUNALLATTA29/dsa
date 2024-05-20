
#include <iostream>
using namespace std;
int main()
{
    string username, password;
    
    cout<<"enter your user name: ";
    cin>> username;
    
    cout<<"enter your password: ";
    cin>> password;
    
    if(username=="kunal" & password=="dhoom"){
        cout<<"login done";
    }else{
        cout<<"wrong  entry";
    }

    return 0;
}