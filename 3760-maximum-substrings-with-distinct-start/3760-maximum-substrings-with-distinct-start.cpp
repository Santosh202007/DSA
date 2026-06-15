class Solution {
public:
    int maxDistinct(string s) {
        map<char,int>p;
        for(auto x:s){
         p[x]++;
        }
        return p.size();
    }
};