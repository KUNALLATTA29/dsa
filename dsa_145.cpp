void bonAppetit(vector<int> bill, int k, int b) {
    bill.erase(bill.begin()+k);
    int count = 0;
    for(auto it:bill){
        count+=it;        
    }
    if(b==count/2){
        cout<<"Bon Appetit";
    }else{
        cout<<b-count/2;
    }
    
}