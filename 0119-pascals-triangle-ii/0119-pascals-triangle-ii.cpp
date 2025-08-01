class Solution {
public:
    vector<int> getRow(int rowIndex) {

        vector<int>ans;
        vector<vector<int>> store;
        for(int i=0;i<=rowIndex;i++){
            vector<int>temp;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) temp.push_back(1);
                else{
                    vector<int>prev=store[i-1];
                    temp.push_back(prev[j-1]+prev[j]);
                }
            }
            store.push_back(temp);
        }

        //  for(auto &it:store){
        //     for(auto bt:it){

        //        cout<<bt<<" ";
        //     }
        //     cout<<endl;
        // }


        for(auto &it:store){
            for(auto bt:it){

                if(it.size()==rowIndex+1) ans.push_back(bt);
            }
        }
        return ans;
    }
};