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

    int lengthOfLL(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }

        return cnt;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = lengthOfLL(head)-n;
        if(length==0) return head->next;

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
