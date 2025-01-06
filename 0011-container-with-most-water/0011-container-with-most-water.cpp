class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area;
        int maxi=0;
        int len,bred;
        while(i<j)
        {
            // for(int k=i;k<j;k++)
            // {
                len=j-i;
                //cout<<len;
                bred=min(height[j],height[i]);
                area=len*bred;
                maxi=max(maxi,area);
            //}
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxi;
    }
};