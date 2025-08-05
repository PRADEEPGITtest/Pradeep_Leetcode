class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int i=0,j=0;
        int cnt=0,maxi=INT_MIN;
        while(j<weight.size()){
            maxi=max(maxi,weight[j]);
            if(weight[j]<maxi) {
                cnt++;
                j++;
                i=j;
                maxi=INT_MIN;
            }
            else j++;

        }
        return cnt;
    }
};