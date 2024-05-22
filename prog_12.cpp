#include<bits/stdc++.h>
using namespace std;

double area(double d1, double d2){
    return 0.5 * d1 *d2;
}

double area(double d1, double d2, double k){
    return k*d1*d2;
}

int main ()
{
  double d1 = 2.5, d2 = 6.5, k = 0.5;
  
  cout<<"area of rhombus: "<<area(d1, d2)<<endl;
  cout<<"area of kite: "<<area(d1, d2, k)<<endl;
  return 0;
}
