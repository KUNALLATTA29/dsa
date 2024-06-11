int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    bool num=false;
    bool low=false;
    bool upp=false;
    bool spa=false;
    vector<char> s={'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+'};
    for(char it:password){
        if(isdigit(it)){
            num=true;
        }else if(islower(it)){
            low=true;
        }else if(isupper(it)){
            upp=true;
        }else if(find(s.begin(),s.end(),it)!=s.end()){
            spa=true;
        }
    }
    int ans =0;
    if(!num){
        ans++;
    }
    if(!low){
        ans++;
    }
    if(!upp){
        ans++;
    }
    if(!spa){
        ans++;
    }
    int k=6-n;
    
    return max(k,ans);
    

}