class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i;
        vector<int>rec;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                rec.push_back(i);
            }
        }
        return rec;
    }
};