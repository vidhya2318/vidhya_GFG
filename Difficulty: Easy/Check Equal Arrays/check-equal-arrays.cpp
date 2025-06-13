// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        int n = a.size();
        unordered_map<int,int>equ;
        for(int i = 0;i < n;i++){
            equ[a[i]]++;
        }
        for(int j = 0;j < n;j++){
            equ[b[j]]--;
        }
       for (auto& entry : equ) {
            if (entry.second != 0)
                return false;
       }
       return true;
    }  
};