class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>a;
        vector<int>x;
        for(int val:arr)
        {
        a[val]++;
        }

        for(auto it=a.begin();it!=a.end();it++)
        {
        x.push_back(it->second);
        }
        sort(x.begin(),x.end());
  auto it=unique(x.begin(),x.end());
  if(it==x.end())
  {
    return true;
  }
  return false;
    }
};