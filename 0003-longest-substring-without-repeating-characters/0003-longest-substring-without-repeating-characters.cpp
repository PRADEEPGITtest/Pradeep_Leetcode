class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int left=s[0];
        // int right=s[1];
        // int hash[27]={0};
        // for(int i=0;i<s.size();i++)
        // {
        //     if(left != right)
        //     {
        //         cnt++;
        //         //hash[right];
        //         left++;
        //         right++;
               
        //     }
        // }
        // int len=hash.size();
        // return len;

        // unordered_map<int,char> mapp;
        // int cnt=1;
        // for(int i=0;i<s.size();i++)
        // {
        //     mapp[s[i]]++;
        // }

        // for(int i=1;i<mapp.size();i++)
        // {
        //     if(mapp[i-1]!=mapp[i])
        //     {
        //         cnt++;
        //     }
        // }
        // return cnt;

        // Sliding Window Approach
        int maxLen=0;
        int len=0;
        
        for(int i=0;i<s.size();i++)
        {
            int hash[256]={0};

            for(int j=i;j<s.size();j++)
            {
                if(hash[s[j]]==1) break;

                len=j-i+1;
                
                hash[s[j]]=1;
            }
            maxLen=max(maxLen,len);
        }

        return maxLen;
    }
    
};