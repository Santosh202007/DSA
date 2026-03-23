class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int m) {
vector<bool>x;
int y=candies.size();
int p=INT_MIN;
for(int i=0;i<y;i++)
{
    p=max(p,candies[i]);
}  
for(int i=0;i<y;i++)
{
  if(candies[i]+m>=p)
  {
x.push_back(1);
  }
  else
  {
x.push_back(0);
  }
}  
return x;
    }
};