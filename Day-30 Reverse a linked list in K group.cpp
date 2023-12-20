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

void reverseArray(int j, int k, vector<int>& arr){
    
    for(int i=j; i<=(j+k)/2; i++){
        int temp = arr[i];
        arr[i] = arr[j+k-i];
        arr[j+k-i] = temp;
        // cout<<arr[i]<<" ";
    }
    // cout<<endl;

}

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        vector<int> nodeArray;

        while(temp!=NULL){
            nodeArray.push_back(temp->val);
            temp = temp->next;
        }

        int n = nodeArray.size();

        for(int i=0; i<n; i+=k){
            if((n-i)/k>0){
                reverseArray(i,i+k-1, nodeArray);
            }
        }

        ListNode* newHead = head;

        for(int i=0; i<n; i++){
            newHead->val = nodeArray[i];
            newHead = newHead->next;
        }

        return head;
    }
};
