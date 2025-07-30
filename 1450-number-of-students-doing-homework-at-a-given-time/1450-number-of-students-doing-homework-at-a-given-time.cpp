class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
int i;
int n=endTime.size();
int k=0;
for(i=0;i<n;i++)
{
    if(endTime[i]>=queryTime &&queryTime>=startTime[i] )
    {
k++;
    }
}   
return k;    
    }
};