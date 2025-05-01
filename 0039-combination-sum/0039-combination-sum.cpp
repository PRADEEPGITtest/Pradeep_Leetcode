void fn(int ind, int target, vector<int>&arr, vector<vector<int>>&ds, vector<int>&candi)
{
    if(ind==candi.size()){
        if(target==0)
        {
            ds.push_back(arr);
        }
        return;
    }

    if(candi[ind]<=target){

        arr.push_back(candi[ind]);
        fn(ind,target-candi[ind],arr,ds,candi);
        arr.pop_back();
    }

    fn(ind+1,target,arr,ds,candi);
}
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> arr;
        vector<vector<int>> ds;

        fn(0, target, arr, ds, candidates);
        return ds;
    }
};