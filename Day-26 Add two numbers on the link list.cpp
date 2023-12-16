/**
 * Definition for singly-linked list.
 * struct ListListListList {
 *     int val;
 *     ListListListList *next;
 *     ListListListList() : val(0), next(nullptr) {}
 *     ListListListList(int x) : val(x), next(nullptr) {}
 *     ListListListList(int x, ListListListList *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {
        ListNode* ans = new ListNode(-1), *end = ans;
        int sum = 0, carry = 0;

        while(num1 || num2){
            sum = carry;
            if(num1){
                sum+= num1->val;
                num1 = num1->next;
            }
            if(num2){
                sum+=num2->val;
                num2 = num2->next;
            }

            ListNode* temp = new ListNode(sum%10);
            carry = sum/10;

            end->next = temp;
            end = end->next;
        }

        if(carry){
            ListNode *temp = new ListNode(carry);
            end->next = temp;
            end = end->next;
        }
        end->next = NULL;
        return ans->next;
    }
};
