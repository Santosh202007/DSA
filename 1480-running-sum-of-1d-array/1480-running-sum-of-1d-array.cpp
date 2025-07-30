class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int a,i,sum=0;
        for(i=0;i<nums.size();i++)
        {

        a=sum+nums[i];
        sum=a;
        nums[i]=a;
        }
return nums;
    }
};