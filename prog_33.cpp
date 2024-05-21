#include <iostream>
using namespace std;

int main() {
    string username, password;

    cout <<"enter a username and password: ";
    cin >> username >> password;

    if(username=="admin" && password=="admin@123"){
        cout<<"access done";
    }else{
        cout<<"not access";
    }

    return 0;
}
