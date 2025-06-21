class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
         vector<int>police;
        vector<int>chor;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]=='T'){
                chor.push_back(i);
            }
            if(arr[i]=='P'){
                police.push_back(i);
            }
        }
        int i=0,j=0;
        int cnt=0;
        
        while(i<police.size() && j<chor.size()){
            
            if(abs(police[i]-chor[j]) <= k){
                cnt++;
                i++;
                j++;
            }
            else if(police[i] > chor[j]){
                j++;
            }
            else{
                i++;
            }
        }
        
        return cnt;
        
        
    }
};