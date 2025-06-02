class Solution {
  public:
    vector<int> printPat(int n) {
vector<int> result;

    for (int row = n; row > 0; row--) {
        for (int num = n; num > 0; num--) {
            for (int repeat = 0; repeat < row; repeat++) {
                result.push_back(num);
            }
        }
        result.push_back(-1); 
    }
    return result;

    }
};