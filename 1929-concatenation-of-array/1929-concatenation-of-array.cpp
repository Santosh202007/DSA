class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>newarr(nums.size()*2);
        int i,n=nums.size(),b=0;
        for(i=0;i<n*2;i++)
        {
            if(i<n)
            {
                newarr[i]=nums[i];
            }
            else
            {
                newarr[i]=nums[b];
                b++;
            }
        }
        return newarr;
    }
};