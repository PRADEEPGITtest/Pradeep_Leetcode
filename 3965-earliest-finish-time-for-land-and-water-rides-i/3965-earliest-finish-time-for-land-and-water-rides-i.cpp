class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int n=landStartTime.size();
        int m=waterStartTime.size();

        // learned and done
     
        int mini=INT_MAX;

        // Land
        for(int i=0;i<n;i++){
            int a=landStartTime[i];
            int b=landDuration[i];

            for(int j=0;j<m;j++){
                // land

                int c=waterStartTime[j];
                int d=waterDuration[j];

                int ans1=a+b;
                int maxi1=max(ans1,c);
                int fin1=maxi1+d;

                // water

                int ans2=c+d;
                int maxi2=max(ans2,a);
                int fin2=maxi2+b;

                mini=min({mini,fin1,fin2});
              
            }
        }
        return mini;

        return mini;
        
    }
};