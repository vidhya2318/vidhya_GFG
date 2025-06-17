class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
            int n = arr.size();
        sort(arr.begin(), arr.end());
        
        vector <int> pre(n+1, 0);
        for(int i = 1; i <= n; i++){
            pre[i] = arr[i-1] + pre[i-1];
        }
        
        int ans = INT_MAX;
        
        for(int i = 0; i < n; i++){
            int low = arr[i];
            int high = arr[i] + k;
            
            int j = upper_bound(arr.begin(), arr.end(), high) - arr.begin();
            int left = pre[i];
            int right = (pre[n] - pre[j] - (n - j)*high);
            
            ans = min(ans, left + right);
        }
        
        return ans;
        
    }
};
