class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a(nums2.begin(),nums2.end());
        unordered_set<int>b;
        for(int val:nums1)
        {
            if(a.find(val)!=a.end())
            {
                b.insert(val);
            }
        }
        vector<int>c(b.begin(),b.end());
        return c;
    }
};