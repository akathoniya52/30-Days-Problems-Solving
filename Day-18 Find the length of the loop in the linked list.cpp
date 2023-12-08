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

    bool arrayPalindrome(vector<int> &arr){
        int n = arr.size();

        for(int i=0; i<=n/2; i++){
            // cout<<arr[i]<<" "<<arr[n-i-1]<<endl;
            if(arr[i]!=arr[n-i-1]){
                return false;
            }
        }

        return true;
    }

    bool isPalindrome(ListNode* head) {
        vector<int> nodeArray;

        ListNode* temp = head;

        while(temp!=NULL){
            nodeArray.push_back(temp->val);
            temp = temp->next;
        }

        return arrayPalindrome(nodeArray);
    }

};
