class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,k=0,n=nums.size();
        for(i=0;i<nums.size();i++)
            {
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
            }
                for(int i=k;i<nums.size();i++)
                    {
                        nums[i]=0;
                    }
    }
};