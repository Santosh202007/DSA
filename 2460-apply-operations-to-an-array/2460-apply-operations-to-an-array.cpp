class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
         int k=0,i,n=nums.size();
         vector<int>yo(n);
      for(i=0;i<n-1;i++)
      {
  if(nums[i]==nums[i+1])
  {
    nums[i]=nums[i]*2;
   nums[i+1]=0;
  }
      }  
for(i=0;i<n;i++)
    {
  if(nums[i]!=0)
  {
yo[k]=nums[i];
 k++;
  }
      } 
for(i=0;i<n;i++)
    {
  if(nums[i]==0)
  {
yo[k]=nums[i];
 k++;
  }
      }        
     return yo;
    }
};