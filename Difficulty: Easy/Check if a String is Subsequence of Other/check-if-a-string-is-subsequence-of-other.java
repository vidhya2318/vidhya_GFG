class Solution {
    public boolean isSubSeq(String A, String B) {
    int n = A.length();
        int m = B.length();
        
        if(n > m) return false;
        int i=0 , j=0;
        while(i<n && j<m)
        {
          if(A.charAt(i) == B.charAt(j)){
              i++; j++;
          }else{
              j++;
          }  
        }
        return i == n;  
    }
};