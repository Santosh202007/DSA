class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        vector<int>x(2000,0);
        for(int i=0;i<a.size();i++)
        {
            x[a[i]-1]++;
        }
        int p=0;
        for(int i=0;i<x.size();i++)
        {
  if(x[i]==0)
  {
    p++;
  }
  if(p==k)
  {
    return i+1;
  }
        }
        return 0;
    }
};