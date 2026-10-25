class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int res=-1;
        while(l<=r){
            if(nums[l]==target)
           { res=l;
            break;}
            else if(nums[l]<target) l++;
            else
            r--;
        }
        return res;
    }
};
