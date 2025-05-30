class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n==1)
        {
            return ;
        }
        deque<int> dq(nums.begin(), nums.end()); 
        for (int i = n-1 ; i >=(n-k); i--) {
            // int j = 0;
            int temp = dq.back();
            dq.pop_back();
            dq.push_front(temp); 
            
            // nums[j] = temp;
            //temp=0;

            // // reverse(nums.begin(), nums.end());
             //cout << nums[i];
            // // temp.clear();
        }
        nums.clear();
        for(auto &it : dq) nums.push_back(it); 
        return;
    }
};