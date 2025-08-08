class Solution {
  public:
    int getLPSLength(string &s) {
    int n = s.size();
    for(int i = 1;i < n;i++){
    if(s[i] == s[0])
	if(s.substr(0,n-i).compare(s.substr(i)) == 0) return n-i;
    }
    return 0;
    }
};