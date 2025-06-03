class Solution {
public:
    int countSubstr(string& s, int k) {
        return countAtMost(s, k) - countAtMost(s, k - 1);
    }

private:
    int countAtMost(string& s, int k) {
        if (k < 0) return 0;  // Edge case handling
        
        int l = 0, count = 0;
        unordered_map<char, int> freq;

        for (int r = 0; r < s.size(); ++r) {
            freq[s[r]]++;

            while (freq.size() > k) {
                if (--freq[s[l]] == 0) {
                    freq.erase(s[l]);
                }
                l++;
            }

            count += (r - l + 1);
        }

        return count;
    }
};
