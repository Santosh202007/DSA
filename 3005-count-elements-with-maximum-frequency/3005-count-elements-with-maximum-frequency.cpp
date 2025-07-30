class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {

        vector<int>yo;
        for(int i=0;i<nums.size();i++)
        {
            int k=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                k++;
                }
            }
            yo.push_back(k);
        }
        int maxi=yo[0];
        for(int i=1;i<yo.size();i++)
        {
         maxi=max(yo[i],maxi);
        }
        int b=0;
    for(int i=0;i<yo.size();i++)
        {
       if(maxi==yo[i])
       {
b++;
       }
        }
        return b;    
    }
};