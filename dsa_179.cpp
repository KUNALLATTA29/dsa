#include<bits/stdc++.h>
using namespace std;

void sol(int *ptr){
    *ptr = *ptr+1;
}
int main(){
    
    int v = 100;
    int *ptr = &v;
    sol(ptr);
    
    cout<<v;;
    
}
