#include "bits/stdc++.h"
/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
    // Write your code here
    Node* temp = head;
    int indexCnt = 1;
    unordered_map<Node*, int> mp;

    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()){
            return indexCnt - mp[temp];
        }
        mp[temp] = indexCnt;
        indexCnt++;
        temp = temp->next;
    }
    // cout<<mp[head]<<endl;

    return 0;
}
