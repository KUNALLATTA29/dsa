#include<bits/stdc++.h>
using namespace std;

double volume(double r){
    return (4.0/3.0) * 3.14 * r*r*r;
}

double volume(double r, double h){
    return (1.0/3.0) * 3.14 * r*r *h;
}

int main ()
{
  double r = 7.3;
  double h = 8.3;

  cout<<"volume of sphere: "<<volume(r)<<endl;
  cout<<"volume of cone: "<<volume(r, h)<<endl;
  return 0;
}
