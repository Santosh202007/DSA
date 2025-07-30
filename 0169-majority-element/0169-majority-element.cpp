class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,n,j;
        for ( i = 0; i < nums.size(); i++) {
            int freq = 0;
            for ( j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    freq++;
                }
            }
            if (freq > nums.size() / 2) {
                return nums[i]; 
            }
        }
return -1;
    }
};
