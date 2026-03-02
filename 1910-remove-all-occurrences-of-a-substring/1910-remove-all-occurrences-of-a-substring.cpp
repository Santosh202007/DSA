class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=1,l;
        while(n)
        {
            l=s.find(part);
            if(s.find(part)<s.length())
            {
                s.erase(l,part.size());
            }
            else
            {
                n=0;
            }
        }
        return s;
    }
};