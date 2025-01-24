void merge(vector<int> &nums,int low,int mid,int high)
{
//     vector<int> temp;
//     int left=low;
//     int right=mid+1;
//     while(left<=mid && right<=high)
//     {
//         if(nums[left]<=nums[right])
//         {
//             temp.push_back(nums[left]);
//             left++;
//         }
//         else
//         {
//             temp.push_back(nums[right]);
//             right++;
//         }
//     }

//     while(left<=mid)
//     {
//         temp.push_back(nums[left]);
//         left++;
//     }
//     while(right<=high)
//     {
//         temp.push_back(nums[right]);
//         right++;
//     }

//     for(int i=low;i<=high;i++)
//     {
//         nums[i]=temp[i-low];
//     }
// }
// void mS(vector<int> &nums,int low,int high)
// {
//     if(low>=high) return ;
//     int mid=(low+high)/2;

//     mS(nums,low,mid);
//     mS(nums,mid+1,high);

//     merge(nums,low,mid,high);
}
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // not the right answer but 
        // tried by sorting it
        // not the correct way to do it

        // sort(nums.begin(),nums.end());
        // return;
        
        // mS(nums,0,nums.size()-1);
        // return ;

        // int l=0;
        // int r=0;
        // int n=nums.size();

        // while(r<n)
        // {
        //     if(nums[l]>nums[r])
        //     {
        //         swap(nums[l],nums[r]);
        //         l++;
        //         r--;
        //     }
        //     else
        //     {
        //         l++;
        //     }
            
        // }
        // return ;

        // DUTCH NATIONAL FLAG ALGORITHM
        int mid=0;
        int high=nums.size()-1;
        int low=0;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        return ;

    }
};