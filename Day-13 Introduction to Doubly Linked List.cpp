/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

void add(Node* head, int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

}

Node* constructDLL(vector<int>& arr) {
    // Write your code here
    if(arr.size()<=0) return NULL;
    Node* head = new Node(arr[0]);
    for(int i=1; i<arr.size(); i++){

        add(head,arr[i]);

    }
    return head;
}





