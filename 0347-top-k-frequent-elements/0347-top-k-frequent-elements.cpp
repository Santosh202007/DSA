class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       vector<int>aa;
 for(int val:nums)
 {
m[val]++;
 }
 priority_queue<pair<int,int>>a;
 for(auto val:m)
 {
 a.push({val.second,val.first});
 }
while(k>0)
{
    aa.push_back(a.top().second);
    a.pop();
    k--;
}
return aa;
    }
};