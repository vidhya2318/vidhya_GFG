// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
       int n = arr.size();
       int max = arr[0];
       for(int i = 0;i < n;i++){
           if(arr[i] > max)
              max = arr[i];
       }
    return max;    
    }
};