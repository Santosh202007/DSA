class Solution {
public:
    int findLucky(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<int>y;
     int j,i;
     int n=nums.size();
     y.push_back(nums[0]);
     for(i=1;i<n;i++)
     {
             if(nums[i]!=nums[i-1])
             {
                y.push_back(nums[i]);
             }
     }
     int q=-1,a=0;
     int x=y.size();
    for(i=0;i<x;i++)
{
    for(j=0;j<n;j++)
    {
        if(y[i]==nums[j])
        {
   a++;
        }
    }
        if(y[i]==a)
        {
 q=max(q,y[i]);
        }
        a=0;
}
return q;
    }
};