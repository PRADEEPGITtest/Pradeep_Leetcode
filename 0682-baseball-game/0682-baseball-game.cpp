class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>v;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C") v.pop_back();

            else if(ops[i]=="D"){
                int a=v[v.size()-1]*2;
                //cout<<a<<endl;
                v.push_back(a);
            }
            else if (ops[i]=="+"){
                int a=v[v.size()-1]+v[v.size()-2];
                //cout<<a<<endl;
                v.push_back(a);
            }
            else{
                int ele= stoi(ops[i]);
                v.push_back(ele);
            }
        }
        int sum=0;
        for(auto it:v) {sum+=it;}
        return sum;
    }
};