class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>mm;
        for(auto x:strs)
        {
            string o=x;
            sort(o.begin(),o.end());
            m[o].push_back(x);
        }
        for(auto x:m)
        {
            mm.push_back(x.second);
        }
        return mm;
    }
};