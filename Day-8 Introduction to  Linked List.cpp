/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* add(Node* &head, int &value){
    Node* newNode = new Node(value);
    if(head==NULL){
        return newNode;
    }
    else{
        Node *temp= head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
}

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node *head = NULL;
    for(auto i:arr){
        head = add(head,i);
    }
    return head;
}
