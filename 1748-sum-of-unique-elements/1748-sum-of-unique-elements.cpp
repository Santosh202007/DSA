class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>x;
        sort(nums.begin(),nums.end());
        if(nums[0]!=nums[1])
        {
            x.push_back(nums[0]);
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
            x.push_back(0);
            }
           if(nums[i]==nums[i-1])
         {
                 x.push_back(0);
         }
         else
         {
         x.push_back(nums[i]);
         }
        }
int sum=0;
     for(int i=0;i<x.size();i++)
        {
        sum=sum+x[i];
        }
        return sum;
    }
};