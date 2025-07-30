class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>newarr(nums.size());
        int i,j;
       for(i=0;i<nums.size();i++)
       {
        int a=0;
       for(j=0;j<nums.size();j++)
       {
       if(nums[i]>nums[j])
       {
        a++;
       }
       } 
       newarr[i]=a;
       } 
       return newarr;
    }
};