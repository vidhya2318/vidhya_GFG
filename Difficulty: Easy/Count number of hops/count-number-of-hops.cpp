
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {
        if(n == 0 || n == 1)  return 1;
        if(n == 2) return n;
        return countWays(n-1) + countWays(n-2) + countWays(n-3);
        
    }
};
