class Solution {
public:
    int reverseBits(int n) {
 int b=0;
          for(int i=0;i<32;i++)
          {
            b=b<<1;
            b=b |(n&1);
            n=n>>1;
          }
    
    return b;
}
};