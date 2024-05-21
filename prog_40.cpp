#include <iostream>
using namespace std;

int main() {
    string a;
    

    cout <<"enter day (must be in lowercase): ";
    cin >> a;
    
    if(a=="monday"){
        cout<<"weekday";
    }else if(a=="tuesday"){
        cout<<"weekday";
    }else if(a=="wednesday"){
        cout<<"weekday";
    }else if(a=="thursday"){
        cout<<"weekday";
    }else if(a=="friday"){
        cout<<"weekday";
    }else if(a=="saturday"){
        cout<<"weekend";
    }else{
        cout<<"weekend";
    }
    
    

    return 0;
}
