class Solution {
  public:
    int substrCount(string &s, int k) {
        unordered_map<char,int>mp;
        int i=0,j=0,cnt=0;
        while(j<s.size()){
            mp[s[j]]++;
            if(j-i+1==k){
               if(mp.size()==k-1){
                   cnt++;
               } 
               mp[s[i]]--;
               if(!mp[s[i]])mp.erase(s[i]);
               i++;
            }
            j++;
        }
        return cnt;
    }
};