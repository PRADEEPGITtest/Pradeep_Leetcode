class Solution {
public:
    string largestEven(string s) {
        int flag=0;
        for(int i=s.size()-1; i>=0; i--){
            if((s[i]-'0') % 2 == 0 ){
                flag=1;
                break;
            }
            else{
                s.erase(i);
            }
        }

        if(flag) return s;
        return "";
    }
};