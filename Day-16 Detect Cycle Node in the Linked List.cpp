/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*> nodeList;
    ListNode* temp = head;

    while(temp!=NULL){
        if(nodeList.find(temp)!=nodeList.end()){
            return temp;
        }
        nodeList.insert(temp);
        temp = temp->next;
    }

    return NULL;
    }
};
