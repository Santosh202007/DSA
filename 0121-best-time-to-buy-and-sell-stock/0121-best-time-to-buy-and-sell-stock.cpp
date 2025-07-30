class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mp=0;
    int n=prices.size();
    int cp=prices[0];
    int i,a;
    for(i=0;i<n;i++)
    {
 cp=min(cp,prices[i]);
 a=prices[i]-cp;
 mp=max(a,mp);
 if(mp<0)
 {
    mp=0;
 }
    }
return mp;
    }
};