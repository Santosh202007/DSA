class Solution {
public:
    int minSubArrayLen(int k, vector<int>& a) {
        int l=0,ans=INT_MAX,sum=0;
        for(int r=0;r<a.size();r++)
        {
            sum=sum+a[r];

        while(sum>=k)
         {
            ans=min(ans,r-l+1);
            sum=sum-a[l];
            l++;
         }
        }
        if(ans==INT_MAX)
        {
            return 0;
        }
        else
        {
            return ans;
        }
    }
};