class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        // extreme brute force

        // map<int,int> mapp;
        // for(auto it:x) mapp[it]++;
        // if(mapp.size()>2){
        //     int n=x.size(); int maxi=INT_MIN;
        //     int sum=0;
        //     for(int i=0;i<n;i++){
        //         for(int j=i+1;j<n;j++){
        //             for(int k=j+1;k<n;k++){
        //                 if(x[i]!=x[j] && x[j]!=x[k] && x[k]!=x[i]){
        //                     //cout<<y[i]<<" "<<y[j]<<" "<<y[k]<<endl;
        //                     sum=y[i]+y[j]+y[k];
        //                     maxi=max(maxi,sum);
        //                 }
        //             }
        //         }
        //     }
        //     return maxi;
        // }
        // return -1;
        int n=x.size();
        map<int,int> mapp1;
        for(auto it:x) mapp1[it];

        if(mapp1.size()>2){
            map<int,int> mapp;
            for(int i=0;i<n;i++){
                if(mapp[x[i]]>y[i]){
                    //cout<<mapp[x[i]]<<" ";
                    continue;
                }
                else mapp[x[i]]=y[i];
            }
            // vector<int> arr;
            // for(auto it:mapp)
            // {
            //     int b=it.second;
            //     arr.push_back(b);
            // }

            // int m=arr.size();
            // sort(arr.begin(),arr.end());
            // int ans=arr[m-1]+arr[m-2]+arr[m-3];
            // return ans;

            int fstmax=-1, secmax=-2, thirdmax=-3;
            //vector<int> arr = {2,3,4,7,5,3,4};
            for(auto it:mapp){
                if(it.second>=fstmax){
                    thirdmax=secmax;
                    secmax=fstmax;
                    fstmax=it.second;
                }
                else if(fstmax>=it.second && it.second>=secmax && it.second>thirdmax){
                    thirdmax=secmax;
                    secmax=it.second;
                    //fstmax=it;
                }
                else  if(fstmax>=it.second && secmax>=it.second && it.second>thirdmax){
                    thirdmax=it.second;
                }
            }
            // cout<<fstmax<<endl;
            // cout<<secmax<<endl;

            return fstmax+secmax+thirdmax;
        }

        return -1;

    }
};