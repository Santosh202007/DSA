class Solution {
public:
    string frequencySort(string s) {
        string sa;
        map<char,int>a;
        for(char val:s)
        {
            a[val]++;
        }
        priority_queue<pair<int,char>>aa;
        for(auto val:a)
        {
            aa.push({val.second,val.first});
        }
        int b;
            b=aa.top().first;
 while(!aa.empty())
 {
if(b>=1)
{
sa.push_back(aa.top().second);
b--;
}
 if(b==0)
 {
 aa.pop();
     b=aa.top().first;
 }
 }
 return sa;
    }
};