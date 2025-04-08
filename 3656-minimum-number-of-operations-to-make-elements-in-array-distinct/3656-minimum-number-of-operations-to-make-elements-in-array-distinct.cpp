class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int i=0;
        int oper=0;
        unordered_map<int,int> mapp;
        

        while(i<nums.size())
        {
            for(int j=i;j<nums.size();j++)
            {
                mapp[nums[j]]++;
            }
            int flag=0;
            for(auto it:mapp) 
            {
                if(it.second>1) 
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) return oper;
            i=i+3;
            mapp.clear();
            oper++;
        }
        return oper;

        return oper;

    }
};