class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size()==1 &&s[0]!=' ')
        {
            return 1;
        }
        int r=s.size()-1;
        int x=0;
        while(r>=0)
        {
            if(s[r]==' ')
            {
            s.erase(r,1);
            r--;
            }
            else
            {
                break;
            }
        }         
             r=s.size()-1;
            while (r>=0)
            {
                if(s[r]!=' ')
                {
           x++;
           r--;
                }
                else
                {
                    break;
                }
            }

        return x;
    }
};