class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {

        long long mini = *min_element(arr.begin(),arr.end());
        long long maxi = *max_element(arr.begin(),arr.end());
        
        return make_pair(mini,maxi);
        
    }
};