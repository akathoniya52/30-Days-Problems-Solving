/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* merge(Node* first,Node* second){

    if(first == NULL){

        return second;

    }

    if(second == NULL){

        return first;

    }

    

    Node* ans = new Node(-1);

    Node* temp = ans;

    while(first!=NULL && second != NULL){

        if(first->data < second-> data){

            temp-> child = first;

            temp = first;

            first = first-> child;

        }

        else{

            temp -> child = second;

            temp = second;

            second = second-> child;

        }

 

    }

 

    while(first != NULL){

        temp-> child = first;

        temp = first;

        first = first-> child;  

    }

    while(second != NULL){

        temp-> child = second;

        temp = second;

        second = second-> child;    

    }

    return ans -> child;

}

 

Node* flattenLinkedList(Node* head) 

{

    if(head == NULL || head->next == NULL){

        return head;

    }

    Node* down = head;

    Node* right = flattenLinkedList(head->next);

    down ->next = NULL;

 

    

 

    Node* ans = merge(down,right);

    return ans;

}

 
