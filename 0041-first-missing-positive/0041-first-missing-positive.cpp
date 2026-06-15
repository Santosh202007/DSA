class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         vector<int>y;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>0)
        y.push_back(nums[i]);
    }
    int x=1;
    sort(y.begin(),y.end());
    for(int i=0;i<y.size();i++)
    {
  if(y[i]==x)
  x++;
    }
    return x;
    }   
    
};