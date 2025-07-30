class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>indi;
        int l=0,r=nums.size()-1;
          while(l<=r)
          {

            if(nums[l]+nums[r]==target)
            {
                indi.push_back(l+1);
                 indi.push_back(r+1);
                return indi;  
            }
            else if(nums[l]+nums[r]>target)
            {
                r--;
            }
            else
            {
                l++;
            }
          }  
          return indi; 
    }
};