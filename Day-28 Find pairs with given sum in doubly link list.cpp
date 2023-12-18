/**
 * Definition of doubly linked list:
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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 *************************************************************************/

vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    vector<pair<int,int>> ans;
    unordered_map<int,int> mp;

    Node* temp = head;

    while(temp!=NULL){
        int el = k - temp->data;
        if(mp.find(el)!=mp.end()){
          ans.push_back({el,temp->data});
        }
        mp[temp->data] ++;
        temp = temp->next;
    }

    return ans;
    
}
