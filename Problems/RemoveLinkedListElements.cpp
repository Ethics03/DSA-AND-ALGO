#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dum = new ListNode();  //dummy NODE IS BASICALLY MADE TO TAKE CARE OF THE CONDITION WHEN THE HEAD ITSELF IS TO BE REMOVED
                                         //DUMMY EASES THE PROCESS OF ITERATION
                                         //dum->next points to the head node
                                         //then a current node is for iteration points to the dummy node
                                         //and then we return the dummy->NEXT which after iteration points to the modified head node
        dum->next = head;
        ListNode *current;
        current = dum;
        while(current->next != NULL){
            if(current->next->val == val){
                current->next = current->next->next;
            }
            else{
                current = current->next;
            }
        }
        return dum->next;
    }
};

int main() {
  
    return 0;
}
    
