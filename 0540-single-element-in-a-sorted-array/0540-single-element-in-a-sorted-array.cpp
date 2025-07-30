class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int l=0,r=arr.size()-1;
          if(arr.size()==1)
        {
        return arr[0];
        }
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(mid==0 && arr[mid]!=arr[mid+1])
            {
                return arr[0];
            }
             if(mid==arr.size()-1 && arr[mid]!=arr[mid-1])
            {
                return arr[mid];
            }
            if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
            {
                return arr[mid];
            }
            if(mid%2==0)
            {
             if(arr[mid]==arr[mid-1])
             {
                r=mid-1;
             }
             else
             {
                l=mid+1;
             }
            }
            else
            {
 if(arr[mid]==arr[mid-1])
 {
    l=mid+1;
 }
 else
 {
    r=mid-1;
 }
            }
        }
    
        return -1;
    }
};