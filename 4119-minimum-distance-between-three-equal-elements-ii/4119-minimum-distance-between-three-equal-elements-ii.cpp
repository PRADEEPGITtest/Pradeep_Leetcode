class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size()<=2) return -1;

        map<int, vector<int> > mapp;

        for(int i=0; i<nums.size(); i++){
            mapp[nums[i]].push_back(i);
        }

        // for(auto &it:mapp){
        //     cout<<it.first<<"-->";
        //     for(int i=0; i<it.second.size(); i++){
        //         cout<<it.second[i]<<" ";
        //     }
        //     cout<<endl;
        // }

        int fin=1e9, mini=1e9;
        for(auto&it:mapp){

            if(it.second.size()>2){
                int l=0, r=2;

                while(r<it.second.size()){
                    int ans=abs(it.second[l]-it.second[l+1]) +
                    abs(it.second[l+1]-it.second[r])+
                    abs(it.second[l]-it.second[r]) ;

                    mini=min(mini, ans);

                    l++;
                    r++;
                }
            }

            // fin=min(fin,mini);
        }
        if (mini==1e9) return -1;
        return mini;

   
        
    }
};