class Solution {
  public:
    int minOperation(int n) {
       int ans=0;
        while(n)
        {
            if(!(n%2))
            n/=2;
            else
            n--;
            
            ans++;
        }
        return ans;
    }
};