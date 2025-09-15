class Solution {
    public boolean stringStack(String pat, String tar) {
      int n = pat.length();
        int m = tar.length();
        int i = n - 1, j = m - 1; // start from end

        while (i >= 0 && j >= 0) {
            if (pat.charAt(i) == tar.charAt(j)) {
                // match, move both
                i--;
                j--;
            } else {
                // simulate delete: skip two characters in pat
                i -= 2;
            }
        }

        return j < 0; 
    }
}
