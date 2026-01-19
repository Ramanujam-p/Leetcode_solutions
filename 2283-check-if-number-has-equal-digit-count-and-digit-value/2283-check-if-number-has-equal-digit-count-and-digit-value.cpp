class Solution {
public:
    bool digitCount(string num) {
      unordered_map<int,int> m;
      for(auto x:num)
        m[x-'0']++;
      for(int i=0;i<num.size();i++)
        if(num[i]-'0'!=m[i]) 
            return false;
     return true;
    }
};