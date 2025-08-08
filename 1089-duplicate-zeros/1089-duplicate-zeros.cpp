class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>x;
        int n=arr.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
             x.push_back(0);
              x.push_back(0);
            }
            else 
            {
                if(x.size()<arr.size())
                {
                x.push_back(arr[i]);
                }
            }
        }
        for(i=0;i<arr.size();i++)
        {
            arr[i]=x[i];
        }
        
    }
};