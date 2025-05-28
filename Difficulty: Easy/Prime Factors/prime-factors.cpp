class Solution {
  public:
    vector<int> AllPrimeFactors(int N) {
    vector<int>ans;
	    for(int i = 2 ; i < N ; i++){
	        bool flag = false;
	        while(N%i==0){
	            flag = true;
	            N/=i;
	        }
	       
	        if(flag)ans.push_back(i);
	    }
	    if(N!=1)ans.push_back(N);
	    return ans;
	}
};