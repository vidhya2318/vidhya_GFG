class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<int>res;
        for(int i = 1; i < n;i++){
          if(arr[i] == arr[i-1]) {
              res.push_back(arr[i]);
          } 
        }
        return res;
    }
};