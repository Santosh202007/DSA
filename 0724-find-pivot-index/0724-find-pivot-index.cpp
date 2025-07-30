class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i;
        vector<int>le(n);
         vector<int>re(n);
          le[0]=0;
          re[n-1]=0;
     for(i=1;i<n;i++) 
        {
        le[i]=le[i-1]+nums[i-1];
        }
        for(i=n-2;i>=0;i--) 
        {
        re[i]=re[i+1]+nums[i+1];
        }
        for(i=0;i<n;i++)
        {
            if(re[i]==le[i])
            {
                return i;
            }
        }
        return -1;
    }
};