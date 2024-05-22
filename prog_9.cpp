#include<bits/stdc++.h>
using namespace std;

double area(double b1, double h){
    return b1*h;
}

double area(double b1, double b2, double h){
    return 0.5 *(b1+b2)* h;
}

int main ()
{
  double b1 = 22.3;
  double h = 33.1;
  double b2 = 2.4;
  
  cout<<"area of parallelogram: "<<area(b1, h)<<endl;
  cout<<"area of trapezoid: "<<area(b1, b2, h)<<endl;
  return 0;
}
