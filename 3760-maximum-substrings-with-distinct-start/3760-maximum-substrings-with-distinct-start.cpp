class Solution {
public:
    int maxDistinct(string s) {
    bool ans[26]={false};
    int c=0;
    for(auto x:s)
    {
        if(!ans[x-'a'])
        {
            ans[x-'a']=true;
            c++;
        }
    }
        return c++;
    }
};