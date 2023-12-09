/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

 void populate(Node *&tail, int data){
    tail->next = new Node(data);
    tail = tail->next;
}

Node* segregateEvenOdd(Node* head)
{
    Node* ptr = head;

    Node* evenHead = new Node(-1);
    Node* evenTail = evenHead;

    Node* oddHead = new Node(-1);
    Node* oddTail = oddHead;

    while(ptr != NULL){
        if(ptr->data % 2 == 0) populate(evenTail, ptr->data);
        else populate(oddTail, ptr->data);
        ptr = ptr->next;
    }
    evenTail->next = oddHead->next;
    return evenHead->next;
}
