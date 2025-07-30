class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i,j;
 for(i=0;i<arr.size();i++)
 {
    for(j=0;j<arr.size();j++)
    {
        if(i!=j)
        {
        if(arr[i]==2*arr[j])
        {
            return true;
        }
    }
    }
 }
 return 0;
    }
};