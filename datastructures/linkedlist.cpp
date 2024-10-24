#include <bits/stdc++.h>


using namespace std;



// Structure for the node in linked list
// add Node* prev to make it a doubly linked list

struct Node{
  
  int data;
  Node *next;

};

class LinkedList{

  Node* head;

public:
 
    LinkedList() : head(nullptr) {} // this by default makes the head point to null

    void insertAtBeginning(int val){ //inserting first index
      Node* newnode = new Node();  // create new node for it 
      newnode -> data = val;      // points to the data of it 
      newnode -> next = head;      // points to the head ptr which is null
      head = newnode;              //and then make head as newnode 
    }

    
 void display(){
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }

        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> "; 
            temp = temp->next;
        }
        cout << "NULL" << endl; 
    }

};

int main() {
  


  LinkedList l1;
  l1.insertAtBeginning(5);
  l2.insertAtBeginning(6);
  l1.display();

  return 0;
}
    
