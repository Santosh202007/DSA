class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        int n=nums.size();
        for(i=0;i<n-1;i++)
        {
    if(nums[i+1]-nums[i]==2)
    {
        return nums[i]+1;
    }
        }
        if(nums[n-1]!=n)
        {
            return n;
        }
        return 0;
    }
};