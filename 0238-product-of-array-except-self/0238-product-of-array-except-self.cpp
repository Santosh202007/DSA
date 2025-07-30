class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size());
         vector<int>right(nums.size());
         vector<int>arr(nums.size());
         int i,n=nums.size();
         left[0]=1;
         right[n-1]=1;
         for(i=1;i<n;i++)
         {
          left[i]=left[i-1]*nums[i-1];
         }
         for(i=n-2;i>=0;i--)
         {
         right[i]=right[i+1]*nums[i+1];
         }
         for(i=0;i<n;i++)
         {
            arr[i]=left[i]*right[i];
         }
         return arr;
    }
};