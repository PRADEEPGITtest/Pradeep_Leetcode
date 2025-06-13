#include<bits/stdc++.h>
class Solution {
    static bool comparePairs(pair<char,int> &a, pair<char,int>&b ){
        return a.second>b.second;
    }
public:
    string reorganizeString(string s) {
        map<char,int> mapp;
        int maxi=INT_MIN; int n=s.size();
        for(int i=0;i<s.size();i++){
            mapp[s[i]]++;
        }
        for(auto it:mapp) maxi=max(maxi, it.second);
        if(maxi>(n+1)/2) return "";

        vector<pair<char,int>>arr;

        for(auto &it:mapp) arr.push_back(it);
        sort(arr.begin(), arr.end(), comparePairs);
        

        // while( !(mapp.empty() )){
        //     for(auto &it:mapp){
        //         if(it.second !=0 ){
        //             str+=it.first;
        //             it.second--;
        //         }
        //         cout<<str<<endl;
        //         if(it.second==0) mapp.erase(it.first);
        //     }
            // for(auto it:mapp) cout<<it.first<<" "<<it.second<<endl;
            // cout<<endl<<endl;
        //}
           //for(auto &it:arr) cout<<it.first<<" "<<it.second<<endl;
        //    while(!(arr.empty())){
        //     for(auto &it:arr){
        //         if(it.second!=0){
        //             str+=it.first;
        //             cout<<str<<endl;
        //             it.second--;
        //         }
        //         if(it.second==0) arr.erase(arr.begin()+it.first);
        //     }
        
        int cnt=0; 
        vector<int> res(n);

        for(auto &it: arr){
            while(it.second>0){
                if(cnt<n){
                    res[cnt]=it.first;
                    cnt+=2;
                    it.second--;
                }
                else break;
            }
        }
        int cnt1=1;
        for(auto &it:arr){
            while(it.second>0){
                if(cnt1<n){
                    res[cnt1]=it.first;
                    cnt1+=2;
                    it.second--;
                }
                else break;
            }
        }
        string str="";
        for(int i=0;i<n;i++){
            str.push_back(res[i]);
        }
        return str;
    }
};