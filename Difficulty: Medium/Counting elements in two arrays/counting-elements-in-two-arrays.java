
class Solution {
    public static ArrayList<Integer> countLessEq(int a[], int b[]) {
        ArrayList<Integer> res = new ArrayList<>();
        Arrays.sort(b);  // sort b[] once

        for (int x : a) {
            // Count how many b[j] <= x using upper bound
            int count = upperBound(b, x);
            res.add(count);
        }

        return res;
    }

    // upperBound returns index of first element > x
    static int upperBound(int[] arr, int x) {
        int low = 0, high = arr.length;
        while (low < high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) low = mid + 1;
            else high = mid;
        }
        return low;
    }
}
