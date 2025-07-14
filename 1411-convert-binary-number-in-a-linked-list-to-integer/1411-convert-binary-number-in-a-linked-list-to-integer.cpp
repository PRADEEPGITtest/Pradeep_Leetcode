/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode*i=head;
        int sum=0;
        int ans=0;
        vector<int> arr;
        while(i!=NULL){
            arr.push_back(i->val);
            i=i->next;
        }
        //cout<<sum<<endl;
        //for(auto it:arr) cout<<it<<" ";
        int j=0;
        for(int i=arr.size()-1;i>=0;i--){
            ans+=pow(2,j)*arr[i];
            j++;
        }
        return ans;
    }
};