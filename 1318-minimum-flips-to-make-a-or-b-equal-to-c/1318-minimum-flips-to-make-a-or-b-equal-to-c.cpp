class Solution {
public:
    int minFlips(int a, int b, int c) {
int x=0;
           while (a || b || c) {
            if (((a & 1) | (b & 1)) != (c & 1)) {
                if ((a & 1) == 1 && (b & 1) == 1 && (c & 1) == 0)
                {
                    x += 2;
                }
                else
                {
                    x++;
                }
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }


        return x;
    }
};