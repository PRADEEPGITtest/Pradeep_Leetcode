class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cons=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                cons++;
                if(cons==3) return true;
            }
            else cons=0;
        }
        return false;
    }
};