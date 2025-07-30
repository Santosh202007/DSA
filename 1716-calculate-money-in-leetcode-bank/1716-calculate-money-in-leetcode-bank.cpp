class Solution {
public:
    int totalMoney(int n) {
        int i;
        int x=1,b=1,sum=0;
        for(i=1;i<=n;i++)
        {
        sum=sum+x;
        x++;
        if(i%7==0)
        {

           x=b+1;
           b=x;
        }
        }
        return sum;
    }
};