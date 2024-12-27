class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l_sum=0, maxSum=0;
        for(int i=0;i<k;i++)
        {
            l_sum=l_sum + cardPoints[i];
        }
        maxSum=l_sum;
        cout<<maxSum<<" ";

        int r_sum=0, r_ind=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            l_sum=l_sum-cardPoints[i];
            r_sum=r_sum+cardPoints[r_ind];
            r_ind--;
            maxSum=max(maxSum,l_sum + r_sum);
            cout<<maxSum<<" ";
        }
        

        return maxSum;


    }
};