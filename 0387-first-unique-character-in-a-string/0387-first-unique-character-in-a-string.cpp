
class Solution {
public:
    int firstUniqChar(string s) {
    map<char,int> m;
    int a2 = INT_MAX;

    for(char val : s) {
        m[val]++;
    }

    for(auto it = m.begin(); it != m.end(); it++) {
        if(it->second == 1) {
            size_t x = s.find(it->first);   
            a2 = min(a2, (int)x);             
        }
    }

    return a2 == INT_MAX ? -1 : a2;

    }
};