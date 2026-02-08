class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        // int i=0;
        // vector<long long>temp;
        //temp[0]=nums[0];
        // while(i<nums.size()){
        //     if(temp[i-1]==nums[i] && i-1<0 ){
        //         long long add=temp[i]+nums[i+1];
        //         temp[i]=add;
        //         nums.erase(nums.begin()+(i+1));

        //     }

        //     else{
        //         temp.push_back(nums[i]);
        //         i++;
        //     }
        // }
        // return temp;

        // using vector as stack gone through solutions
        vector<long long> temp;
        cout<<temp.size();
        for(int i=0; i<nums.size(); i++){
            long long ele=nums[i];

            while(temp.size()!=0 && temp.back()==ele){
                temp.pop_back();
                ele=ele*2;
            }

            temp.push_back(ele);
        }

        return temp;

        
    }
};