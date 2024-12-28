class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt=0;
        int mincnt=99999;
        for(int i=0;i<k;i++){
            if (blocks[i]=='W')
            {
                cnt++;
            }
        }
        mincnt=min(mincnt,cnt);
        int l=0;
        int r=k;
        while(r<blocks.size())
        {
            if (blocks[l]=='W')
            {
                cnt-=1;
            }
            if(blocks[r]=='W'){
                cnt+=1;
            }
            mincnt=min(mincnt,cnt);
            l++;
            r++;
        }
        return mincnt;
    }
};