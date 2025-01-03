class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int greedFac=0;
        int i=0;
        int j=0;

        int n=g.size();
        int m=s.size();

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(i<n && j<m)
        {
            // while(j<s.size())
            // {
                if(g[i]<=s[j])
                {
                    greedFac++;
                    i++;
                }
                j++;

            
            //}
        }

        return greedFac;
    }
};