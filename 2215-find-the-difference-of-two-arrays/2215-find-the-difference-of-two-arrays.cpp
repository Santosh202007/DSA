class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) {
 vector<int>x,y;
 unordered_set<int> A;
 unordered_set<int> B;
 for(auto x:a)
 {
 A.insert(x);
 }
 for(auto x:b)
 {
B.insert(x);
 }
 for(auto p:A)
 {
  if(B.find(p)==B.end())
  x.push_back(p);
 }
  for(auto p:B)
 {
    if(A.find(p)==A.end())
y.push_back(p);
 }
 
return {x,y};
    }
};