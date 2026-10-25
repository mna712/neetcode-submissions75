class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
        map<int,int>freq;
        for(int i=0;i<nums.size();i++)
        {
          auto it = freq.find(nums[i]);
          if(it != freq.end())
          {
          res=true; 
          break;
          }
          else
          freq.insert({nums[i],1});
        }
        return res;
    }
};