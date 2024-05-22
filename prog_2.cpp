#include<bits/stdc++.h>
using namespace std;
int sum (int a, int b)
{
  return a + b;
}

float sum(float a, float b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

int main ()
{
  int a1 = 1, a2 = 2;
  float b1 = 2.3f, b2 = 4.5f;
  double c1 = 4.4, c2 = 5.3;

  cout<<sum (a1, a2)<<endl;
  cout<<sum (b1, b2)<<endl;
  cout<<sum (c1, c2)<<endl;
  return 0;
}
