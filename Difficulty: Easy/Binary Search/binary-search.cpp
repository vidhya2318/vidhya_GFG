class Solution {
  public:
    int binarysearch(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int result = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == k) {
                result = mid;         // Store the index
                high = mid - 1;       // Keep searching in left half
            }
            else if (k > arr[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        return result;
    }
};
