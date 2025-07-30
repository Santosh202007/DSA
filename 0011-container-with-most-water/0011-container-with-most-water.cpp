class Solution {
public:
    int maxArea(vector<int>& height) {
        int h,l=0,r=height.size()-1,maxwater=0,currentwater;
        while(l<r)
        {
                h=min(height[l],height[r]);
             currentwater=h*(r-l);
             maxwater=max(currentwater,maxwater);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }

        }
        return maxwater;
    }
};
