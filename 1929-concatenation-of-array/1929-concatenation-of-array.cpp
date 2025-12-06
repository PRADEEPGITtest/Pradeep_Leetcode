class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp1(2*n);
        temp1=nums;
        
        for(auto it:temp1){
            temp1.push_back(it);
        }
        return temp1;
    }
};