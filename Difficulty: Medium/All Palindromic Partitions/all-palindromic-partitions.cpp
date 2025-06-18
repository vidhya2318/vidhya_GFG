class Solution {
  public:
      
    // Check if the substring s[l...r] is a palindrome
    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--])
                return false;
        }
        return true;
    }

    // Backtracking function
    void backtrack(int index, string &s, vector<string> &path, vector<vector<string>> &res) {
        if (index == s.size()) {
            res.push_back(path);
            return;
        }

        for (int i = index; i < s.size(); ++i) {
            if (isPalindrome(s, index, i)) {
                path.push_back(s.substr(index, i - index + 1));
                backtrack(i + 1, s, path, res);
                path.pop_back(); // backtrack
            }
        }
    }

    vector<vector<string>> palinParts(string &s) {
        vector<vector<string>> res;
        vector<string> path;
        backtrack(0, s, path, res);
        return res;
    }
};
