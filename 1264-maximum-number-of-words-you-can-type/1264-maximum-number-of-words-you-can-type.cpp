class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> str;
        string temp=" ";

        for(int i=0; i<text.size(); i++){
            if(text[i] == ' '){
                str.push_back(temp);
                temp=" ";
            }
            else{
                temp+=text[i];
            }
        }
        str.push_back(temp);

        int cnt=0;
        int flag=0;
        for(auto it:str){
            for(auto bt:brokenLetters){

                if(it.find(bt) != string::npos){
                    flag=1;
                    break;
                }
            }

            if(flag){
                flag=0;
                continue;
            }
            else cnt++;
        }

        return cnt;
        
    }
};