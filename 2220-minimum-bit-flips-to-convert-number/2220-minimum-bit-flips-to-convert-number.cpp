class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x=start;
        int y=goal;
        int a=x^y;
int xx=0;
while(a!=0)
{
    if((a&1)==1)
    {
        xx++;
    }
    a=a>>1;
}
        return xx;
    }
};