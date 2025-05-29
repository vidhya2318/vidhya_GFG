// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int original = n, sum = 0;
        while (n > 0) {
            int digit = n % 10; // Extract last digit
            sum += digit * digit * digit; // Cube the digit and add to sum
            n /= 10; // Remove last digit
        }
        return sum == original; // Check if sum equals the number itself
        
    }
};