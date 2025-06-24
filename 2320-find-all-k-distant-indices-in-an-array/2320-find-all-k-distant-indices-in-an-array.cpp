class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(key==nums[i]) {
                ans.push_back(i);
                // cout<<i<<endl;
            }
        }
        int j=0;
        vector<int> pu;
        int n=ans.size();
        map<int,int> mapp;

        while(n--){
            // cout<<1<<endl;
            for(int i=0;i<nums.size();i++){
                if(abs(i-ans[j])<=k && nums[ans[j]]==key) {
                    pu.push_back(i);
                }
            }
            j++;
        }
        for(int i=0;i<pu.size();i++){
            mapp[pu[i]]++;
        }
        vector<int> fin;
        for(auto it:mapp){
            fin.push_back(it.first);
        }
        return fin;
    }
};