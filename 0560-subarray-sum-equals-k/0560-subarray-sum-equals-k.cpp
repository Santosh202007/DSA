class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
    unordered_map<int,int>mp;
    int sum=0;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
           sum=sum+a[i];
           if(sum==k)
           {
            count++;
           }

           if(mp.count(sum-k))
           {
            count=count+mp[sum-k];
           }
           mp[sum]++;
    }   
    return count;
    }
};