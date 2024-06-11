int camelcase(string s) {
    int k=1;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            k++;
        }
    }
    return k;

}