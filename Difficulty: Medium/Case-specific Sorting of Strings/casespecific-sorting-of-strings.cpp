class Solution {
  public:
    string caseSort(string& s) {
        int n = s.size();
        string str1 = "", str2 = "";

        // Separate uppercase and lowercase letters
        for (int i = 0; i < n; i++) {
            if (s[i] <= 'Z')
                str1 += s[i];
            else
                str2 += s[i];
        }

        // Sort them individually
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        int j = 0, k = 0;

        // Reconstruct the string with sorted characters in original case positions
        for (int i = 0; i < n; i++) {
            if (s[i] <= 'Z') {
                s[i] = str1[j++];
            } else {
                s[i] = str2[k++];
            }
        }

        return s;
    }
};
