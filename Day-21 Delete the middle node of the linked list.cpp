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
    
int findLength(ListNode* head){
    ListNode*temp = head;
    int cnt = 0;
    
    while(temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        // Write your code here.
        int length = findLength(head)/2;
        ListNode* temp = head;


        while(temp!=NULL){
            if(length==1){
                temp->next = temp->next->next;
                return head;
            }
            length--;
            temp = temp->next;
        }
        return head;
    }
};
