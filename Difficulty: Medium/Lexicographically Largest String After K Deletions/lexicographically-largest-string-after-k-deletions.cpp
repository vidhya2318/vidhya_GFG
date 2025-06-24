class Solution {
  public:
    string maxSubseq(string& s, int k) {
        int n = s.length();
        int x = k;
        string ans;
        
        for(char c : s){
            if(ans.empty()) ans.push_back(c);
            else{
                while(k > 0 && !ans.empty() && c > ans.back()) ans.pop_back(), k--;
                ans.push_back(c);
            }
        }
        
        while(ans.length() > (n-x)) ans.pop_back();
        return ans;
    }
};
