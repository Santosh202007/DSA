class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>yo(2,-1);
        int i, l=0,r=nums.size()-1;
        for(i=0;i<=r;i++)
        {
            if(nums[i]==target)
            {
                yo[0]=i;
                break;
            }
        }
         for(i=r;i>=0;i--)
        {
            if(nums[i]==target)
            {
                yo[1]=i;
                return yo;
            }
        }
return yo;
    }
};