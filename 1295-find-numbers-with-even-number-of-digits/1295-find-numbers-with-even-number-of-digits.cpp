class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0,i;
        for(i=0;i<nums.size();i++)
        {
            int b=0;
            while(nums[i]!=0)
            {
                nums[i]=nums[i]/10;
                b++;
            }
            if(b%2==0)
            {
                even++;
            }
        }
        return even;
    }
};