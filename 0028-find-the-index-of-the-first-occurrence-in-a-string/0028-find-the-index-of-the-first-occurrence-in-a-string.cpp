class Solution {
public:
    int strStr(string haystack, string needle) {
        string a;
        int y;
        int n=needle.size();
    for(int i=0;i<haystack.size();i++)
    {
        if(haystack[i]==needle[0])
        {
            a=haystack.substr(i,n);
            y=i;
        }
        if(a==needle)
        {
            return y;
        }
    }
    return -1;
    }
};