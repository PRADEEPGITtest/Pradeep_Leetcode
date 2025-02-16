class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int mini=prices[0];
        // int buy;
        // int maxi=0;
        // int sell;

        // for(int i=1;i<prices.size();i++)
        // {
        //     if(mini>=prices[i])
        //     {
        //         mini=prices[i];
        //         buy=i;
        //     }
            
        // }
        // if(buy==prices.size()-1)
        //     return 0;

        // for(int i=mini;i<prices.size();i++)
        // {
        //     if(maxi<prices[i])
        //     {
        //         maxi=prices[i];
        //         sell=i;
        //     }
        // }

        // return (maxi-mini);
        // int cnt=0;
        // for(int i=1;i<prices.size();i++)
        // {
        //     if(prices[i-1]<prices[i])
        //     {
        //         cnt++;
        //     }
        // }
        // if(cnt==prices.size())
        //     return 0;

        // int labam=0;
        // int profit;
        // for(int i=ind;i<prices.size();i++)
        // {
        //     int profit=0;

        //     for(int j=ind+1;j<prices.size();j++)
        //     {
        //         if(prices[i]>prices[j]) break;
        //         int prev_Profit=abs(prices[j]-prices[i]);
        //         profit=max(profit,prev_Profit);
        //     }

        //     labam=max(profit,labam);
        // }
        // return labam;

        int profit=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            int cost=prices[i]-mini;

            profit = max(profit ,cost);

            mini=min(mini,prices[i]);
        }
        return profit;

    }
};