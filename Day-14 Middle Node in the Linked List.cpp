/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    // Write your code here
    int n = 0;
    Node* temp = head;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    n = n/2; //middle 

    // cout<<n<<endl;
    temp = head;

    while(temp!=NULL){
        if(n==0)
            return temp;
        n--;
        temp=temp->next;
    }

    return head;
}






