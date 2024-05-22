#include<bits/stdc++.h>
using namespace std;

double area(int s1, double l1){
    return (s1 * pow(l1, 2)) / (4 * tan(3.14 / s1));
}

double area(int s2, double l2[]){
    double sum = 0.0;
    for (int i = 0; i < s2; ++i) {
        int j = (i + 1) % s2;
        sum += (l2[i] * l2[j]) / 2;
    }
    return sum;
}

int main ()
{
  int s1 = 5, s2 = 3;
  double l1 = 4.0;
  double l2[] = {2.0, 4.0, 6.0};
  
  
  cout<<"area of regular polygon: "<<area(s1, l1)<<endl;
  cout<<"area of irregular polygon: "<<area(s2, l2)<<endl;
  return 0;
}
