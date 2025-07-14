class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        long long i=0,j=skill.size()-1;
        long long sum=0, prev_sum=0;
        // for(int i=0;i<skill.size();i++) sum+=skill[i];
        // int m=skill.size()/2;
        // if(sum%m!=0) return -1;
        long long ans=0;
        while(i<j){
            sum=skill[i]+skill[j];
            ans+=(skill[i]*skill[j]);
            i++;
            j--;

            prev_sum=skill[i]+skill[j];
            if(sum!=prev_sum){
                return -1;
            }
        }
        return ans;
    }
};