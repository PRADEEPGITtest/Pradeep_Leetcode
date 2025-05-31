class Solution {
public:
// // int bs(vector<int>nums, int left, int right, int tar){
// //     if(left<=right){
// //         int mid=(left+right)/2;
// //         if(nums[mid] == tar) return mid;
// //         else if(tar<nums[mid]) return bs(nums, left, mid-1, tar);
// //         else return bs(nums, mid+1, right, tar);
// //     }
// // }
    int search(vector<int>& nums, int tar) {
//         int index, flag=0;
//         for(int i=0;i<nums.size();i++){
//             if(tar == nums[i]) { flag=1; index=i; }
//         }
//         cout<<index<<"\n";
//         if(flag== 0) return -1;

//         for(int i=nums.size()-1;i>=index;i--){
//             int temp=nums[i];
//             nums.pop_back();
//             nums.insert(nums.begin(),temp);
//         }

//         for(auto it:nums){
//             cout<<it<<" ";
//         }

//         //int left=0, mid, right=nums.size()-1;

//         //int ans=bs(nums, left, right, tar);
//         if(is_sorted(nums.begin(), nums.end())){
//             return index;
//         }
//         return -1;

           for(int i=0;i<nums.size();i++){
            if(tar==nums[i]) return i;
           }
           return -1;
    }
};