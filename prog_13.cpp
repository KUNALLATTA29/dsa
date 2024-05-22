#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

long factorial(long n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main ()
{
  int n1 = 10;
  long n2 = 20;
  
  cout<<"factorial of int: "<<factorial(n1)<<endl;
  cout<<"factorial of long int: "<<factorial(n2)<<endl;
  return 0;
}
