class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        map<int,int>a;
        vector<int>result;
        for(int val:nums1)
        {
            m[val]++;
        }
        for(int val:nums2)
        {
            a[val]++;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
         for(auto i=a.begin();i!=a.end();i++)
        {
            if(it->first==i->first)
       { 
result.push_back(it->first);
       }
        } 

        } 
        return result;
    }
};