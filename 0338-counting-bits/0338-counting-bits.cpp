class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>a;
 for(int i=0;i<=n;i++)
 {
    int x=0;
    int y=i;
  while(y!=0)
  {
    if(y&1==1)
    {
       x++;
    }
    y=y>>1;
  }
 a.push_back(x);
 }
 return a;
    }
};