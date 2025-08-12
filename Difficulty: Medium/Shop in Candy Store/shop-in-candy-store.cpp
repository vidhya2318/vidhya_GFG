class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
       int mincost = 0;
        int i = 0, j = n - 1;
        while (i <= j) {
            mincost += arr[i];  
            i++;            
            j -= k;             
        }

        int maxcost = 0;
        i = 0, j = n - 1;
        while (i <= j) {
            maxcost += arr[j];  
            j--;                
            i += k;
        }
        return {mincost,maxcost};
    }
};