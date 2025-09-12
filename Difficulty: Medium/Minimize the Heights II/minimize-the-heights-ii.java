import java.util.*;

class Solution {
    int getMinDiff(int[] arr, int k) {
        int n = arr.length;  // compute n inside
        Arrays.sort(arr);

        int ans = arr[n - 1] - arr[0]; // initial difference

        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;

        for (int i = 1; i < n; i++) {
            if (arr[i] - k < 0) continue; // skip if negative

            int minVal = Math.min(smallest, arr[i] - k);
            int maxVal = Math.max(largest, arr[i - 1] + k);

            ans = Math.min(ans, maxVal - minVal);
        }

        return ans;
    }
}



