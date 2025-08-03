class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& nums) {
     int n=nums.size();
     int i,x=0;
     for(i=0;i<n;i++)
     {
    if(nums[i]%2!=0)
    {
 x++;
    }
    if(x==3)
 {
    return true;
 }
    else
    {
        x=0;
    }           
     }   
     return 0;
    }
};