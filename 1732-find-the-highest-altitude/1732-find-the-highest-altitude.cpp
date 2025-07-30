class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxvalue=0;
        int i,cs=0;
  for(i=0;i<gain.size();i++)
  {
 cs=cs+gain[i];
 maxvalue=max(cs,maxvalue);
  }
  return maxvalue;
    }
};