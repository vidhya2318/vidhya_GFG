#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string findLargest(vector<int> &arr) {
       
        vector<string> strArr;
        for (int num : arr) {
            strArr.push_back(to_string(num));
        }

        auto compare = [](string &a, string &b) {
            return (a + b) > (b + a);
        };

        sort(strArr.begin(), strArr.end(), compare);

        string result = "";
        for (auto &s : strArr) {
            result += s;
        }

        if (result[0] == '0')
            return "0";

        return result;
    }
};
