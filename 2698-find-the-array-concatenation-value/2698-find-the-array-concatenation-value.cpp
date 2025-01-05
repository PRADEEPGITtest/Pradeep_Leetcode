class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long i=0;
        long long j=nums.size()-1;

        long long concat=0;

        if (nums.size()==1) return nums[i];
        while(i<j)
        {
            string s=to_string(nums[i])+ to_string(nums[j]);
            concat=concat+stoi(s);

            i++;
            j--;

        }

        if(i==j) concat+=nums[i];
       
        return concat;
    }
};