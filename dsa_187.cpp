public:
    void sort012(int a[], int n)
    {
        // code here
        int l =0;
        int mid = 0;
        int r = n-1;
        
        while(mid<=r){
            if(a[mid]==0){
                swap(a[mid],a[l]);
                mid++;
                l++;
            }
            else if(a[mid] == 1){
                mid++;
            }else{
                swap(a[mid], a[r]);
                r--;
            }
        }
        
    }