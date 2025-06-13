class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        int n = a.size();
        int m = b.size();
        if(m > n) return false;
        unordered_map<int,int>sub;
        for(int i = 0;i < n;i++){
            sub[a[i]]++;
        }
        for(int j = 0;j < m;j++){
            if(sub[b[j]]>0)
              sub[b[j]]--;
            else
              return false;
        }
        return true;
    }
};