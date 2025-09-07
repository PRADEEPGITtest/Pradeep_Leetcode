class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>a;
        if(n%2 == 1){
            for(int i=0; i<=n/2; i++){
                if(i==0) a.push_back(0);

                else{
                    a.push_back(i);
                    a.push_back(-i);
                }
            }
        }

        else{
            for(int i=1; i<=n/2; i++){

                a.push_back(i);
                a.push_back(-i);
                
            }
        
        }

        return a;

    }
};