/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node* reverse(Node* head){
    Node* pre = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}

void populate(Node *&tail, int data){

    tail->next = new Node(data);

    tail = tail->next;

}

Node *addOne(Node *head)
{
    if(head == NULL) return head;
    Node *ptr = reverse(head);

    int carry = 0;
    int sum = 0;

    Node *Head = new Node(-1);
    Node *tail = Head;

    sum = ptr->data + carry + 1;
    carry = sum/10;
    populate(tail, sum%10);
    ptr = ptr->next;

    while(ptr != NULL){
        sum = ptr->data + carry;
        carry = sum/10;
        populate(tail, sum%10);
        ptr = ptr->next;
    }

    while(carry != 0){
        sum = carry;
        carry = sum/10;
        populate(tail, sum%10);
    }
    return reverse(Head->next);
}
