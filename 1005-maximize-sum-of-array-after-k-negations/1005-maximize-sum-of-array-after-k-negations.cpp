class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
        if(nums[i]<=0 && k>0)
 {
nums[i]=-nums[i];
k--;
 }
        }
sort(nums.begin(),nums.end());
        int sum=0;
        for(i=0;i<nums.size();i++)
        {
sum=sum+nums[i];
      }
      while (k>0)
      {
           if(k%2==0)
           {
            return sum;
           }
           else
           {
            sum=sum-2*nums[0];
            return sum;
           }
      }
 return sum;   
}
    
};