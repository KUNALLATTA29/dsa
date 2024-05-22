#include<bits/stdc++.h>
using namespace std;

double area(double l, double w){
    return l*w;
}

double area(double k, double b, double h){
    return k * b * h;
}

int main ()
{
  double l = 4.4;
  double w = 8.3;
  double b = 5.4;
  double h = 9.3;
  double k = 0.5;

  cout<<"area of rectangle: "<<area(l, w)<<endl;
  cout<<"area of triangle: "<<area(k, b , h)<<endl;
  return 0;
}
