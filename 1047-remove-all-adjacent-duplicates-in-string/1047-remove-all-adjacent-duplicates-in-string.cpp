class Solution {
public:
    string removeDuplicates(string s) 
    {
int i=0;
int n=s.size();
        int x=1;
        while(x)
        {
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
                break;
            }
            if(i==n-1)
            {
                x=0;
            }
        }
        }
        return s;
    }
};