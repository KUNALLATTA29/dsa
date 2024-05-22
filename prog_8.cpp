#include<bits/stdc++.h>
using namespace std;

int average(int a, int b){
    return (a+b)/2;
}

float average(float a, float b){
    return (a+b)/2.0f;
}

double average(double a, double b){
    return (a+b)/2.0;
}

int main ()
{
  int a1 = 8, a2 = 7;
  float b1 = 2.2f, b2 = 5.3f;
  double c1 = 4.4, c2 = 9.1;

  cout<<"average of int: "<<average(a1, a2)<<endl;
  cout<<"average of float: "<<average(b1, b2)<<endl;
  cout<<"average of double: "<<average(c1, c2)<<endl;
  return 0;
}
