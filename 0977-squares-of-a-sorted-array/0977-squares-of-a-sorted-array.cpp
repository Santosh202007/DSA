class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
    int i;
        for(i=0;i<n;i++)
            {
     arr[i]=nums[i]*nums[i];
            }
        sort(arr.begin(),arr.end());
        
        return arr;
    }
};