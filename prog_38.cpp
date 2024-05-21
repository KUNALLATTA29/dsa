#include <iostream>
using namespace std;

int main() {
    int a;
    char b, c;

    cout <<"enter amount(total balance = 50000): ";
    cin >> a;
    
    int bal = 50000;
    
    if(a+25<bal)/*25 for using cost*/{
        bal-=a;
        cout<<"transection done"<<endl;
    }else{
        cout<<"don't have info balance";
    }
    
    cout<<"would you like to check balance(y/n) or withdrawal limit(y/n): ";
    cin>>b >> c;
    
    if(b=='y'){
        cout<<bal<<endl;
        if(c=='y'){
            cout<<bal-25/*25 for using cost*/;
        }
    }else{
        cout<<"thanks";
    }
    
    

    return 0;
}
