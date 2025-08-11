class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>arr;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) arr.push_back(nums[i]);
        }
        if(arr.size()==0) return 0;
        int k=arr[0];
        for(int i=1;i<arr.size();i++){
            k=k&arr[i];
        }
        
        return k;

        
    }
};