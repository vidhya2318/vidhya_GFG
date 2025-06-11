class Solution {
  public:
    int KthDistinct(vector<int> nums, int k) {

    map<int, int> freq;

    // Count frequencies using map
    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    // Find the k-th distinct element
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (freq[nums[i]] == 1) {
            count++;
            if (count == k) {
                return nums[i];
            }
        }
    }

    // If fewer than k distinct elements
    return -1;


    }
};