class Solution {
public:
    int maxDifference(string s) {
        map<char,int>a;
        for(char c:s)
        {
              a[c]++;            
        }
        int Min=INT_MAX,MAX=0;
        for(auto x:a)
        { 
            if(x.second%2==0)
            {
         Min=min(Min,x.second);
            }
            else
            {
                   MAX=max(MAX,x.second);
            }
        }
        return MAX-Min;
    }
};