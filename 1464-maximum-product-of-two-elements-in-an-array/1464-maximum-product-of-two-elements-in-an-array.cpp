
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j;
        int p,maxi=0;
        for(i=0;i<nums.size();i++)
        {
     for(j=i+1;j<nums.size();j++)
       {
       p=(nums[i]-1)*(nums[j]-1);
       maxi=max(p,maxi);
       }
        }
        return maxi;
    }
};