#include<bits/stdc++.h>
using namespace std;

class car{
    private:
        string model;
        string manufacturer;
        int price;
    public:
        void setDetails(string m, string manu, int p){
            model=m;
            manufacturer=manu;
            price=p;
        }
        void getDetail(){
            cout<<model<<endl;
            cout<<manufacturer<<endl;
            cout<<price<<endl;
        }
};

int main(){
    car myobj;
    
    myobj.setDetails("maruti", "india", 2200);
    myobj.getDetail();
}
