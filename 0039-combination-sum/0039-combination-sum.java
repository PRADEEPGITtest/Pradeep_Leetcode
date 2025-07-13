class Solution {
    private void fn(int ind, int[]candidates, List<Integer>ds, List<List<Integer>> ans, int target){
        if(candidates.length==ind){
            if(target==0){
                ans.add(new ArrayList <> (ds));
            }
            return ;
        }

        if(candidates[ind]<=target){

            ds.add(candidates[ind]);
            fn(ind, candidates, ds, ans, target-candidates[ind]);
            ds.remove(ds.size()-1);

        }

        fn(ind+1,candidates,ds,ans,target);
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        
        List<List<Integer>> ans=new ArrayList<> (); 
        fn(0,candidates, new ArrayList<> (), ans, target);
        return ans;
    }
}