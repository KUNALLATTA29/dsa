#include<bits/stdc++.h>
using namespace std;

int power(int a, int n){
    return pow(a,n);
}

float power(float a, float n){
    return pow(a,n);
}

int main ()
{
  int b1 = 2, p1 = 3;
  float b2 = 3.1, p2 = 2;
  
  cout<<"power of int: "<<power(b1, p1)<<endl;
  cout<<"power of float: "<<power(b2, p2)<<endl;
  return 0;
}
