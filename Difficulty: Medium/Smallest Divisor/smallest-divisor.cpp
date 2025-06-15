class Solution {
  private:
    bool isValid(vector<int>& nums, int K, int divisor){
        int sum = 0;
        for(auto num: nums){
            sum += num/divisor;
            if(num % divisor  !=  0)
                sum++;
        }
        
        return sum <= K;
    }
  public:
    int smallestDivisor(vector<int>& nums, int K) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());
        
        while(start <= end){
            int mid = start+(end-start)/2;
            if(isValid(nums, K, mid))
                end = mid-1;
            else
                start = mid+1;
        }
        
        return start;
    }
};