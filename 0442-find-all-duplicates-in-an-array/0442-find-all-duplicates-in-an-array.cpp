class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>a;
        vector<int>y;
        for(int val:nums)
        {
            a[val]++;
        }
        for(auto val:a)
        {
            if(val.second>1)
            {
                y.push_back(val.first);
            }
        }

return y;
    }
};