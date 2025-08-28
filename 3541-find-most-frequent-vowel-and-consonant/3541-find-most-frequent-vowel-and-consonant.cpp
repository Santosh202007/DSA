class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>vowels;
        map<char,int>cons;
        for(char c:s)
        {
            if(c=='a'||c=='e'||c=='i'||c=='u'||c=='o')
            {
              vowels[c]++;
            }
            else
            {
             cons[c]++;
            }
        }
        int Max=0,MAX=0;

        for(auto x:vowels)
        { 
         Max=max(Max,x.second);

        }
         for(auto x:cons)
        {
    MAX=max(MAX,x.second);
        }
        return Max+MAX;
    }
};