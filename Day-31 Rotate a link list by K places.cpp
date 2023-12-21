/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     int length = 0;
     Node* temp = head;

     while(temp!=NULL){
          length++;
          temp = temp->next;
     }

     k = k%length;
     if(k==0) return head;
     int x = length-k;
     temp = head;
     while(x!=1){
          x--;
          temp = temp->next;
     }
     Node* temp1 = temp->next;

     temp->next = NULL;
     Node* temp2 = temp1;
     while(temp1->next!=NULL){
          temp1 = temp1->next;
     }

     temp1->next = head;

     return temp2;
}
