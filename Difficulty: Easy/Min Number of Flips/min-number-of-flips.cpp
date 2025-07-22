class Solution {
  public:
    int minFlips(string& s) {
        int firstZero = 0;
    int firstOne = 0;
    
    for(int i = 0; i<s.length(); i++) {
        if(i%2 == 0) {
            if(s[i] == '0') 
                firstOne++;
            else 
                firstZero++;
        }
        else {
            if(s[i] == '0') 
                firstZero++;
            else 
                firstOne++;
        }
    }
    return min(firstZero, firstOne);
        
    }
};
