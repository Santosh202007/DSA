class Solution {
public:
        int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>exp;
        int i;
        for(i=0;i<n;i++)
        {
            exp.push_back(heights[i]);
        }
        sort(exp.begin(),exp.end());
        int k=0;
          for(i=0;i<n;i++)
        {
            if(exp[i]!=heights[i])
            k++;
        }
        return k;
    }
};