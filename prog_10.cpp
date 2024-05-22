#include<bits/stdc++.h>
using namespace std;

double volume(double l, double w, double h){
    return l*w*h;
}

double volume(double l, double w, double h, bool prism){
    if(prism){
        return l*w*h;
    }else{
        return -1;
    }
}

int main ()
{
  double l = 22.3;
  double h = 33.1;
  double w = 2.4;
  
  cout<<"volume of cuboid: "<<volume(l, w, h)<<endl;
  cout<<"volume of rectangular: "<<volume(l, w, h, true)<<endl;
  return 0;
}
