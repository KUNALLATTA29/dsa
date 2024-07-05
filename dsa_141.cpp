#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,1,0,-1,-1};
    
    int po=0;
    int ne=0;
    int ze=0;
    float n=arr.size();
    
    for(auto it:arr){
        if(it>0){
            po++;
        }else if(it<0){
            ne++;
        }else{
            ze++;
        }
    }
    cout<<fixed<<setprecision(6)<<po/n<<endl;
    cout<<ne/n<<endl;
    cout<<ze/n<<endl;
    
    
    return 0;
}