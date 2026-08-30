class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
         auto it=upper_bound(a.begin(),a.end(),target);
         if(it==a.end())
         {
            return a[0];
         }
         char c=*it;
         return c;   
    
    }
};