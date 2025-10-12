class Solution {
public:
    bool scoreBalance(string s) {
        int sum=0;
        for(auto it: s){
            sum+= (it-'a'+1);
        }

        int a=0;
        for(auto bt:s){
            a+= (bt-'a'+1);
            if(a*2 == sum) return true;
        }

        return false;
    
    }
};