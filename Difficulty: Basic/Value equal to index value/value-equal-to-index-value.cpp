// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        int n = arr.size();
        vector<int>res;
        for(int i = 0;i < n;i++){
           if(arr[i] == i+1)
           res.push_back(arr[i]);
        }
        return res;
        
    }
};