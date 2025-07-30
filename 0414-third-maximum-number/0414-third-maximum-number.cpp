class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i,k=0;
        result.push_back(nums[0]);
        for(i=0;i<nums.size();i++)
        {
            if(result[k]!=nums[i])
            {
                k++;
                result.push_back(nums[i]);
            }
        }
        k=k+1;
        if(k>=3){
return result[k-3];
        }
    if(k==2)
    {
        return result[k-1];
    }
 return result[k-1];
    }
};