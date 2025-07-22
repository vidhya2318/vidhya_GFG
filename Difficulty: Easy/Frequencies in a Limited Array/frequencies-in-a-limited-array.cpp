class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int>res(n,0);
        for( int i = 0;i < n;i++){
            if(arr[i] >= 1 && arr[i] <= n){
               res[arr[i]-1]++;
            }   
        }
        return res;
    }
};
