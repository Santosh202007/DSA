class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int i;
        int x=1,a=0;
        for(i=0;i<n-1;i++)
        {
          if(nums[i]<nums[i+1])
          {
            x++;
          }
          else
          {
  a=max(a,x);
            x=1;
          }
        }
        a=max(a,x);
return a;
    }
};