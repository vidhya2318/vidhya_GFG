/*you are required to complete this method*/
 class Solution{
  public:
    int convertFive(int n)
    {
        string num = to_string(n);
        for(int i = 0; i < num.length(); i++)
            if(num[i] == '0')  num[i] = '5';
            
        return stoi(num);
    }
};