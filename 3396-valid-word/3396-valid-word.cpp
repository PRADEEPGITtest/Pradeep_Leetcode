class Solution {
public:
    bool isValid(string word) {
        int cnt1=0, cnt2=0, cnt3=0;
        if(word.size()<3) return false;
        else{
            for(int i=0;i<word.size();i++){
                if(word[i]=='a' || word[i]=='e'|| word[i]=='i'|| word[i]=='o'|| word[i]=='u' || word[i]=='A' || word[i]=='E'|| word[i]=='I'|| word[i]=='O'|| word[i]=='U')
                    cnt1++;
                else if(word[i]-'0'>=0 && word[i]-'0'<=9) cnt2++;
                else if(word[i]-0>=65 && word[i]-0<=122) cnt3++;
            }
            if(cnt1==0 || cnt3==0) return false;
        }
        if(cnt1+cnt2+cnt3==word.size()) return true;
        return false;
    }
};