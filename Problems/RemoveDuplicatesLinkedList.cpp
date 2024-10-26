#include <bits/stdc++.h>

using namespace std;


  
  struct ListNode {
      int val;
     ListNode *next;
       };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        

        ListNode *track = head;
        if(head == NULL){
            return head;
        }
        while(track->next != NULL){
            if (track->val == track->next->val){
                track->next = track->next->next; // basically instead of deleting
                //directly assigning to the nextnode to break connection of the currrent
                //node which is the duplicate

            }
            else{
                track=track->next;
            }

            }
            
            
    return head;
        
    }
};

int main() {




    return 0;
}
    
