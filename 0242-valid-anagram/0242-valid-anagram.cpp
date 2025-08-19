class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        map<char,int>m1;
   for(char val:s)
   {
    m[val]++;
   }
    for(char val:t)
   {
    m1[val]++;
   }
   return m==m1;
    }
};