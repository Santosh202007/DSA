class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unq=0;
        for(int value:nums)
        {
            unq=unq^value;
        }
        return unq;
    }
};