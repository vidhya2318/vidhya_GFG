// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        return arr[n-1]*arr[n-2];
    }
};