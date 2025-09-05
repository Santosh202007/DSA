class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(x==z && y!=z)
        {
            return 1;
        }
        if(y==z)
        {
            return 2;
        }
                 while(x!=z && y!=z)
                 {
                    if(z>y && z>x)
                    {
                    x++;
                    y++;
                    }
                
                    else if(z<y && z<x)
                    {
                        y--;
                        x--;
                    } 
                    else if(z<y && z>x )
                    {
                        y--;
                        x++;
                    }
                    else if(z>y && z<x)
                    {
                        y++;
                        x--;
                    }
                     if(x==z && y==z)
                    {
                        return 0;
                    }
                    if(x==z)
                    {
                        return 1;
                    }
                    if(y==z)
                    {
                        return 2;
                    }
                 
                 
    }
          return 0;     
    }
};