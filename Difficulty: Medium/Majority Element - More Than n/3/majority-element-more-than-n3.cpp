class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
         int n=arr.size();
        int a=-1, b=-1, ca=0, cb=0;
        int mn=(int)(n/3)+1;
        vector<int> ans;
        
        for(int i=0; i<n; i++) {
            if(b!=arr[i] && ca==0) {
                a=arr[i];
                ca++;
            } else if(a!=arr[i] && cb==0) {
                b=arr[i];
                cb++;
            } else if(a==arr[i]) {
                ca++;
            } else if(b==arr[i]) {
                cb++;
            } else {
                ca--;
                cb--;
            }
        }
        
        ca=0, cb=0;
        for(int i=0; i<n; i++) {
            if(arr[i]==a)   ca++;
            if(arr[i]==b)   cb++;
        }
        
        if(ca>=mn)   ans.push_back(a);
        if(cb>=mn)   ans.push_back(b);
        
        sort(ans.begin(), ans.end());
        return ans;
    }

};