class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>u;
    for(auto x: nums)
    {
        u[x]++;
    }
    for(auto x:nums)
    {
        if(u[x]==1)
        {
            return x;
        }
    }
    return -1;
    }
};