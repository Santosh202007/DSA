class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>x;
        int j=1;
          while(x.size()<=k)
          {
            int y=1;
         for(int i=0;i<arr.size();i++)
         {
         if(arr[i]==j)
         {
            y=0;
            break;
         }
         }
         if(y)
         {
            x.push_back(j);
         }
         j++;
        }

        return x[k-1];
    }
};