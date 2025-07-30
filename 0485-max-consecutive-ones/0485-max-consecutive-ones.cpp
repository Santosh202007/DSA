class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {      
int a,i,y=0,k=0;
for(i=0;i<nums.size();i++)
{
if(nums[i]==1)
{
    k++;
}
else
{
a=k;
y=max(a,y);
k=0;
}
}
a=k;
y=max(a,y);
return y;
    }
};