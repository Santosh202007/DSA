class Solution {
public:
    string removeDuplicates(string s) 
    {
 string l;
for(char x:s)
{
if(!l.empty() && x==l.back())
{
    l.pop_back();
} 
else
{
    l.push_back(x);
}
}
return l;
    }
};