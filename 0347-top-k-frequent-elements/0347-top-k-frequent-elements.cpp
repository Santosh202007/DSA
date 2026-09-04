class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>x;
        for(auto p:nums)
        {
     x[p]++;
        }
        map<int,vector<int>>mp;
        for(auto p:x)
        {
            mp[p.second].push_back(p.first);
        }
 vector<int>ll;
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            for(auto p:it->second)
            {
                if(k>0)
   ll.push_back(p);
   k--;
            } 
        }
return ll;
    }
};