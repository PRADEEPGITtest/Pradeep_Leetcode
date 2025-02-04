class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        map<int,string> mapp;
        for(int i=0;i<heights.size();i++)
        {
            mapp[heights[i]]=names[i];
        }

        sort(heights.begin(),heights.end(),greater<int>());

        for(int i=0;i<names.size();i++)
        {
            names[i]=mapp[heights[i]];
        }
        return names;

    }
};