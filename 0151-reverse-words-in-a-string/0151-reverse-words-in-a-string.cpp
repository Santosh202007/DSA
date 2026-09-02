class Solution {
public:
    string reverseWords(string s) {

        int p=1;
        for(int i=0;i<s.size();)
        {
            if(s[i]==' ')
            s.erase(0,1);
            else
            break;
        }
        int i=s.size()-1;
        while(1)
        {
            if(s[i]==' ')
            {
           s.pop_back();
           i--;
            }
            else
            break;
        }
    reverse(s.begin(),s.end());
    int l=0;
    for(int i=0;i<s.size();i++)
    {
    if(s[i]==' ')
    {
  reverse(s.begin()+l,s.begin()+i);
  l=i+1;
    }
    if(i==s.size()-1)
    {
 reverse(s.begin()+l,s.begin()+i+1);
    }
    }
     i=s.size()-1;
while(1)
{
if(s[i]==' ')
{
s.pop_back();
i--;
}
else
break;
}
int x=0,y;

for(int i=0;i<s.size();i++)
{
    if(s[i]==' ')
    {
        if(x==0)
            y=i;

        x++;
    }
    else
    {
        if(x>1)
        {
            s.erase(y,x-1);
            i =y;
        }

        x=0;
    }
}
return s;
    }

};