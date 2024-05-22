#include<bits/stdc++.h>
using namespace std;

int maximum(int a, int b){
    return max(a,b);
}

float maximum(float a, float b){
    return max(a,b);
}

double maximum(double a, double b){
    return max(a,b);
}

int main ()
{
  int a1 = 2, a2 = 4;
  float b1 = 5.4f, b2 = 1.3f;
  double c1 = 3.2, c2 = 3.1;

  cout<<"max integer: "<<maximum(a1, a2)<<endl;
  cout<<"max float: "<<maximum(b1 , b2)<<endl;
  cout<<"max double: "<<maximum(c1, c2)<<endl;
  return 0;
}
