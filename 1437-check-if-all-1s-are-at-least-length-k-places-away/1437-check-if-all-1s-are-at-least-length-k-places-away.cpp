class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int a=INT_MAX;
        for(int val :nums)
        {
            if(val==1)
            {
                 if(a<k)
                {
                    return 0;
                }
                a=0;
            }
            else
            { 
                if(a!=INT_MAX)
                {
                a++;
                }
            }
        }
        return 1;
    }
};