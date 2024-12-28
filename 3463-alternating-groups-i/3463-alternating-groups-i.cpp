class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        // int l=0,r=l+2;
        int cnt=0;
        int n=colors.size();
        for(int i=1;i<=n;i++)
        {
            int l=i-1;
            int r=(i+1)%n;
            //int mid=(l+r)/2;
            // for(int j=l;j<r;j++)
            // {
                if(colors[l]!=colors[i%n] && colors[i%n]!=colors[r])
                {
                    cnt++;
                }
            // }
            cout<<cnt<<" ";
        }
        return cnt;
    }
};