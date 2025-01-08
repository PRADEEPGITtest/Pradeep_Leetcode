class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // int profit=0;
        // int P;

        // for(int i=0;i<bills.size();i++)
        // {
        //     if(bills[i]==5)
        //         profit=profit+bills[i];
        //     else if(bills[i]==10)
        //     {
        //         if(profit>=5) 
        //         {
        //             P=bills[i]-5;
        //             profit=profit-5;
        //             profit=profit+P;
        //         }
        //         else return false;
        //     }
        //     else if(bills[i]==20)
        //     {
        //         if(profit>=15)
        //         {
        //             P=bills[i]-15;
        //             profit=profit-15;
        //             profit=profit+P;
        //         }
        //         else return false;
        //     }
        // }
        // return true;

        int five=0;
        int ten=0;

        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
                five++;
            else if(bills[i]==10)
            {
                if(five==0) return false;

                ten++;
                five--;
            }
            else if(bills[i]==20)
            {
                
                if(ten>0 && five>0)
                {
                    ten--;
                    five--;
                }

                else if(five>=3)
                {
                    five=five-3;
                }
                else if (five<3) return false;
            }
                
        }
        return true;

    }
};