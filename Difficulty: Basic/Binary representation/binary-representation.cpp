class Solution {
  public:
    string getBinaryRep(int n) {
        return std::bitset<32>(n).to_string();
        
    }
};