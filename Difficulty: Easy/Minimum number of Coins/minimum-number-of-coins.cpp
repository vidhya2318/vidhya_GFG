// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int n) {
        vector<int>curr = {2000,500,200,100,50,20,10,5,2,1};
        vector<int>res;
        
        for(int i = 0;i < 10;i++ ){
            while(n >= curr[i]){
                n -= curr[i];
                res.push_back(curr[i]);
            }
        }
        return res;
        
    }
};