class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
    int i;
    int n=nums.size();

    if(n==1)
    {
        return false;
    }
    if(nums[0]>=nums[1])
    {
        return false;
    }
    if(nums[n-1]>=nums[n-2])
    {
        return false;
    }
    int x=1,k=0;
    for(i=0;i<n-1;i++)
    {
        if(nums[i]>=nums[i+1] && nums[i]>nums[i-1])
        {
         k=1;
        }
        if(nums[i]>=nums[i+1] && k==0)
        {
    return false;
        }
          if(nums[i]<=nums[i+1] && k==1)
        {
    return false;
        }
    }
    return true;
    }
};