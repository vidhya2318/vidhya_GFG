class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        
              std::unordered_set<int> s;

        // Insert all elements of the array into the set
        for (int i = 0; i < n; ++i) {
            s.insert(arr[i]);
        }

        // Check if every number in the range [A, B] is present in the set
        for (int i = A; i <= B; ++i) {
            if (s.find(i) == s.end()) {
                return false; // Missing element in range
            }
        }

        return true; // All elements found  
   }
};
