class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>a;
        for(int val:nums)
        {
      a[val]++;
        }
        for(auto val:a)
        {
            if(val.second>1)
            {
                return val.first;
            }
        }
        return -1;
    }
};