class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int k=0,i,x=n/2;
        sort(candyType.begin(),candyType.end());
        for(i=1;i<n;i++)
        {
            if(candyType[i]!=candyType[k])
            {
                k++;
                candyType[k]=candyType[i];
            }
        }
        k=k+1;
        if(x==k)
        {
            return k;
        }
       else if(x>k)
        {
            return k;
        }
        else if(x<k)
        {
            return x;
        }
        return -1;
    }
};