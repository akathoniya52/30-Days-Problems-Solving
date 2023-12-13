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

Node* sortList(Node *head){
    // Write your code here.
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    Node* temp = head;

    while(temp!=NULL){
        int el = temp->data;
        if(el==0){
            cnt0++;
        }
        else if(el==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
        temp = temp->next;
    }
    temp=head;
    while(cnt0!=0){
        temp->data = 0;
        temp = temp->next;
        cnt0--;
    }

    while(cnt1!=0){
        temp->data = 1;
        temp = temp->next;
        cnt1--;
    }

    while(cnt2!=0){
        temp->data = 2;
        temp = temp->next;
        cnt2--;
    }

    return head;
}
