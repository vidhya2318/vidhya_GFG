class Solution {
    public String largestSwap(String s) {
      char[] arr = s.toCharArray();
        int n = arr.length;

       
        int[] last = new int[10]; 
        for (int i = 0; i < n; i++) {
            last[arr[i] - '0'] = i;
        }

        
        for (int i = 0; i < n; i++) {
            
            for (int d = 9; d > arr[i] - '0'; d--) {
                if (last[d] > i) {
                    // Step 3: Swap
                    char temp = arr[i];
                    arr[i] = arr[last[d]];
                    arr[last[d]] = temp;
                    return new String(arr);
                }
            }
        }
        return s;
    }
}