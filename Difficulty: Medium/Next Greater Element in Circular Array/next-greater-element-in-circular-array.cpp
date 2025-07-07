class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
          int n=arr.size();
        vector<int>v(n,-1);
        stack<int>st;
        for(int i=0;i<2*n;i++)
       {
         while(!st.empty() && arr[i%n]>arr[st.top()%n])
         {
           v[st.top()%n]=arr[i%n];
           st.pop();
         }
         st.push(i%n);
       }
        return v;
        
    }
};