
class Solution {
  public:
    void zigZag(vector<int> &arr) {
        int n = arr.size();
        for(int i = 0;i < n;i++){
            if(i % 2 == 0){
                
            if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            }
          }
            else
            if(arr[i] < arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        
    }
};
