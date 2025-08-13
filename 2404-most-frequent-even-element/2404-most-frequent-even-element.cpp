class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        if(nums.size()==1)
        {
            if(nums[0]%2==0)
            {
                return nums[0];
            }
        }
        vector<int>even;
        for(int val:nums)
        {
            if(val%2==0)
        {
   even.push_back(val);
        }
        }
        if(even.size()==0)
        {
   return -1;
        }
        int y,a,k=1,b=0;

        sort(even.begin(),even.end());

        for(int i=0;i<even.size()-1;i++)
        {
            if(even[i]==even[i+1])
            {
              a=even[i];
              k++;  
            }
            else
            {

                if(k>b)
                {
                    y=a;
                    b=k;
                }
                k=1;
            }
        }
            
                if(k>b)
                {
                    y=a;
                    b=k;

                }
        auto it=unique(even.begin(),even.end());
        if(it==even.end())
        {
            return even[0];
        }
        return y;
    }
};