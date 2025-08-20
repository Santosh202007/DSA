class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>a;
        vector<int>x;
        for(int val:arr)
        {
        a[val]++;
        }
unordered_set<int>b;
    for(auto val:a)
    {
    auto result=b.insert(val.second);
    if(!result.second)
    {
  return false;
    }
    }
    return true;
    }
};