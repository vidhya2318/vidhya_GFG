// User function Template for C++

class Solution {
  public:
    int toyCount(int n, int k, vector<int> arr) {
        sort(arr.begin(),arr.end());
        int sum = 0;
        int count = 0;
        for(int i = 0;i < n;i++ ){
            if(sum + arr[i] <= k){
                sum += arr[i];
                count++;
            }
            else
               break;
        }
        return count;
        
    }
};