class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>p;
        for(auto x:nums)
        {
         p[x]++;
        }
        map<int,vector<int>>m;
        for(auto x:p)
        {
            m[x.second].push_back(x.first);
        }
        vector<int>pp;
   for(auto it=m.rbegin();it!=m.rend() && k>0;it++)
   {
    for(auto x:it->second)
    {
        if(k>0)
        {
        pp.push_back(x);
        k--;
    }
   }   
   }
        return pp;
    }
    
};