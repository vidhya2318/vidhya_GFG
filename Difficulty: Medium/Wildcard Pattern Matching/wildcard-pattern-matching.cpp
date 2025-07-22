class Solution {
  public:
    bool wildCard(string &txt, string &pat) {
         int star = -1, si = 0, i = 0, j = 0;

        while (i < txt.size()) {
            if (j < pat.size() && (pat[j] == '?' || txt[i] == pat[j])) {
                i++;
                j++;
            }
            else if (j < pat.size() && pat[j] == '*') {
                star = j++;
                si = i;
            }
            else if (star != -1) {
                j = star + 1;
                i = ++si;
            }
            else {
                return false;
            }
        }

        while (j < pat.size() && pat[j] == '*') {
            j++;
        }

        return j == pat.size();
    }
};