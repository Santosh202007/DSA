class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(auto x:nums)
        {
     p.push(x);
        }
        int x=1;
        while(!p.empty())
        {
          if(x==k)
          {
 return p.top();
          }
          p.pop();
          x++;
        }
        return -1;
    }
};