/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    // Write your code here 
    if(head==NULL || head->next==NULL) return head;
    Node* p = NULL;
    Node* curr = head;
    Node* n = head->next;

    while(curr!=NULL){
        curr->next = curr->prev;
        curr->prev = p;
        p = curr;
        curr = n;
        if(n!=NULL){
            n = n->next;
        }
    }
    return p;
      
}

