#include<bits/stdc++.h>

using namespace std;

int main(){
    
    for(int i=1;i<=6;i++){
        for(int sp=6;sp>=i;sp--){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<"#";
        }
        cout<<endl;
    }
    
    
    return 0;
}