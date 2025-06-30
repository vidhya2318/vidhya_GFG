class Solution {
public:
    // Helper to check if target height can be achieved
    bool isPossible(vector<int>& arr, int k, int w, int target) {
        int n = arr.size();
        vector<int> water(n + 1, 0);
        int added = 0, days = 0;

        for (int i = 0; i < n; i++) {
            added += water[i];

            int currHeight = arr[i] + added;
            if (currHeight < target) {
                int need = target - currHeight;
                days += need;
                if (days > k) return false;

                added += need;
                if (i + w < n)
                    water[i + w] -= need;
            }
        }
        return true;
    }

    // This is the function expected by GFG's Driver code
    int maxMinHeight(vector<int> &arr, int k, int w) {
        int low = *min_element(arr.begin(), arr.end());
        int high = low + k;
        int ans = low;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (isPossible(arr, k, w, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
