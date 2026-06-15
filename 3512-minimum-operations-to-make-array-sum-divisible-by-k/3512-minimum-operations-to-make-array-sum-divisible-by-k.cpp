class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
int sum=0;
        for(auto x:nums)
        {
  sum=sum+x;
        }
        int x=sum%k;
        return x;
    }
};