
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        set<int> res;
        for(int i=0;i<arr1.size();i++){
            res.insert(arr1[i]);
        }
        for(int i=0;i<arr2.size();i++){
            res.insert(arr2[i]);
        }
        
        int k = res.size();
        
        return k;
    }
};