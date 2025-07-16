class Solution {
  public:
    int missingNum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int k = 1;
        for(int i = 0;i < n;i++){
            if(k == arr[i]){
                k++;
            }
            else
              return k;
        }
        return n+1;
    }
};