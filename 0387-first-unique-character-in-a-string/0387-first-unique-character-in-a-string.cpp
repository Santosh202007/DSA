
class Solution {
public:
    int firstUniqChar(string s) {
    map<char,int> m;
    int a2 = INT_MAX;

    for(char val : s) {
        m[val]++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]==1)
        {
           return i;                                            
        }
    }
return -1;
    }
};