class Solution {
public:
    int numberOfSubstrings(string s) {
        // int cnt=0;
        // for(int i=0;i<s.size();i++)
        // {
        //     int hash[3]={0};

        //     for(int j=i;j<s.size();j++)
        //     {
        //         hash[s[j]-'a']=1;
        //         //{
        //             if(hash[0]+hash[1]+hash[2]==3)
        //             {
        //                 cnt++;
        //             }
        //         //}
        //     }
        // }
        // return cnt;
        
        //unordered_map<int,char> mapp;
        // Done with striver playlist
        //Optimal

        int arr[3]={-1,-1,-1};
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            arr[s[i]-'a'] = i;
            
            // if(s[i]=='a') mapp[s[i]-'a']=i;
            // else if(s[i]=='b') mapp[s[i]-'b']=i;
            // else if(s[i]=='c') mapp[s[i]-'c']=i;

            // if(mapp[0] && mapp[1] && mapp[2] != -1)
            // {
            //     cnt=cnt+(1 + min(mapp[0] ,min(mapp[1] ,mapp[2])));
            // }

            if(arr[0] !=-1 && arr[1] !=-1 && arr[2] != -1)
            {
                cnt=cnt+ (min(arr[0],min(arr[1],arr[2])) + 1);
            }

        }
        return cnt;
    }
};