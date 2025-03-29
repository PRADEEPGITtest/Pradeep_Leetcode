class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {

        // vector<vector<int>> vec;
        // for(int id=0;id<nums1.size();id++)
        // {
        //     vector<int> ar;

        //         // if nums1 and nums2 has same id 
        //         // sum those nums1 and nums2 val 

        //         if(nums1[id][0]==nums2[id][0])
        //         {
        //             int sum=nums1[id][1]+nums2[id][1];

        //             // nums1[id][val-1]=sum;
        //             ar.push_back(nums1[id][0]);
        //             ar.push_back(sum);
        //             //cout<<ar[0]<< " "<<ar[1];
        //         }

        //         // if not
        //         else
        //         {
        //             // check nums1 row id is small
        //             // add the row and colums of the nums1 in ar array

        //             if(nums1[id][0]<nums2[id][0])
        //             {
        //                 ar.push_back(nums1[id][0]);
        //                 ar.push_back(nums1[id][1]);
        //             }

        //             // if not nums2 row id is small
        //             // add the row and colums of the nums1 in ar array
        //             else
        //             {
        //                 ar.push_back(nums2[id][0]);
        //                 ar.push_back(nums2[id][1]);
        //             }
        //         }
            

        //     vec.push_back(ar);
        // }
        // return vec;

        vector<vector<int>> vec;

        int l=0;
        int r=0;
        
        while(l<nums1.size() && r<nums2.size())
        {
            vector<int> ar;

            if(nums1[l][0]==nums2[r][0])
            {
                int sum=nums1[l][1]+nums2[r][1];

                ar.push_back(nums1[l][0]);
                ar.push_back(sum);

                l++;
                r++;
            }
            else
            {
                if(nums1[l][0]<nums2[r][0])
                {
                    ar.push_back(nums1[l][0]);
                    ar.push_back(nums1[l][1]);
                    l++;
                }
                else
                {
                    ar.push_back(nums2[r][0]);
                    ar.push_back(nums2[r][1]);
                    r++;
                }
            }
            vec.push_back(ar);
        }

        while(l<nums1.size())
        {
           vector<int> ar1;

            ar1.push_back(nums1[l][0]);
            ar1.push_back(nums1[l][1]);
            l++;
            vec.push_back(ar1);
        }
        
        
        while(r<nums2.size())
        {
            vector<int> ar2;

            ar2.push_back(nums2[r][0]);
            ar2.push_back(nums2[r][1]);

            r++;
            vec.push_back(ar2);
        }
       
        
        return vec;
    }
};