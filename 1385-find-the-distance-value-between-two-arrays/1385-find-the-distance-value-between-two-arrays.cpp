class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i,j,a=0,b=0;
        for(i=0;i<arr1.size();i++)
        {
            for(j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])>d)
                {
            a++;
                }
            }
                if(a==arr2.size())
                {
                    b++;
                }
                a=0;
        }
            
        return b;
    }
};