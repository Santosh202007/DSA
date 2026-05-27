class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int>u;
        for(auto x:nums)
        {
     u[x]++;
        }
        int b=0;
        for(auto x:u)
        {
            if(x.second==2)
            {
        b=b^x.first;
            }
        }
        return b;
    }
};