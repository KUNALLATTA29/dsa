#include<bits/stdc++.h>
using namespace std;

double volume(double s){
    return s*s*s;
}

double volume(double r, double h){
    return 3.14 * r*r *h;
}

int main ()
{
  double radius = 2.4;
  double height = 7.7;
  double side_lenght = 2.2;

  cout<<"area of cube: "<<volume(side_lenght)<<endl;
  cout<<"area of cylinder: "<<volume(radius, height)<<endl;
  return 0;
}
