#include<bits/stdc++.h>
using namespace std;

double distance(double x1, double x2, double y1, double y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double distance(double x1, double x2, double y1, double y2, double z1, double z2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
}

int main ()
{
  double x1=2,x2=4,y1=4,y2=8;
  double x3=8,x4=12,y3=5,y4=9,z1=4,z2=6;
  
  cout<<"distance of 1st: "<<distance(x1,x2,y1,y2)<<endl;
  cout<<"distance of 2nd: "<<distance(x3,x4,y3,y4,z1,z2)<<endl;
  return 0;
}
