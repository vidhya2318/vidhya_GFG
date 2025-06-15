class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int n = arr.size();
        vector<int>ans;
        for(int i = 0;i < n;i++){
            if(arr[i] == x)
            ans.push_back(i);
        }
        if (ans.empty()) {
            return {-1};
        }
        return {ans[0],ans[ans.size()-1]};
        
    }
};