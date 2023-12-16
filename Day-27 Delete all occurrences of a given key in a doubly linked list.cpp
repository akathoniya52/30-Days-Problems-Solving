/**
 * Definition of doubly linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node* ans = new Node();
    Node* temp = ans;

    while(head!=NULL){
        if(head->data!=k){
            temp->next = new Node(head->data);
            temp = temp->next;
        }

        head = head->next;
    }

    if(ans->next==NULL) return NULL;
    ans->next->prev = NULL;
    return ans->next;
}
