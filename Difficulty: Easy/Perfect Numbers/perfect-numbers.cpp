class Solution {
  public:
    bool isPerfectNumber(long long n) {
        long long k,sum =1 ;
        if(n <= 1) return 0;
       for(k = 2;k * k <= n;++k){
         if(n %  k == 0){
         sum += k;
         if (k != n / k)
             sum += n / k;
         }
       }
       return sum == n;
    }
};