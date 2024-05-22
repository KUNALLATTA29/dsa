#include<bits/stdc++.h>
using namespace std;

double area(double r){
    return 3.14 *r *r;
}

double area(double s1, double s2){
    return s1*s2;
}

int main ()
{
  double radius = 2.4;
  double side = 2.2;

  cout<<"area of circle: "<<area(radius)<<endl;
  cout<<"area of square: "<<area(side, side)<<endl;
  return 0;
}
