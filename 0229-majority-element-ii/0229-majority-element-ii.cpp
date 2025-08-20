class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>a;
        vector<int>y;
        int x=0;
        for(int val:nums)
        {
            a[val]++;
        }
       for(auto val:a)
       {
        if(val.second>nums.size()/3)
        {
y.push_back(val.first);
        }
       }
       return y;
    }
};