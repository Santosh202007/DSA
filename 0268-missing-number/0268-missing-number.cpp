class Solution {
public:
    int missingNumber(vector<int>& nums) {
   int arr[nums.size()+1];
   int n=nums.size()+1;
   for(int i=0;i<n;i++)
   {
    arr[i]=i;
   }
   int x=0,y=0;
   for(auto p:arr)
   {
  x=x^p;
   }
   for(auto p:nums)
   {
    y=y^p;
   }
        return x^y;
    }
};