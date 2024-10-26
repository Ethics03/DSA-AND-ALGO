#include <bits/stdc++.h>


using namespace std;



// Structure for the node in linked list
// add Node* prev to make it a doubly linked list

struct Node{
  
  int data;
  Node *next; // this is the pointer that the next node contains

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


      //inserting elements at the end of the list
    void insertAtEnd(int val){
      Node* newnode = new Node();
      newnode->data = val;
      newnode->next = NULL;

      if(!head){
        head = newnode;
        return;
      }

      Node* temp = head;
      while(temp->next){
        temp = temp->next;
      }

      temp->next = newnode;

    }

void insertAtPosition(int val , int pos){
  if(pos <  1){
    cout << "Position should be >= 1" << endl;
    return;
  }

  if(pos == 1){
    insertAtBeginning(val);
    return;
  }

  Node* newnode = new Node();
  newnode->data = val;
  
  Node *temp = head;
  for(int i = 1 ;  i  < pos - 1 && temp; ++i){

    temp = temp->next;
  }

  if(!temp){
    cout << "Position out of range. " << endl;
    delete newnode;
    return;

  }

  newnode->next = temp->next;
  temp->next = newnode;
}

void deleteFromBeginning(){

  if(!head){
    cout << "List is Empty! " << endl;
    return; 
    }

  Node* temp = head; // this defines the temp to the old head
  head = head->next; // this makes the head value the newnode 
  delete temp;  // this deletes the old pointer of the head

}

void deleteFromEnd(){
  if(!head){
    cout << "List is empty ! " << endl;
    return;
    }

  if(!head->next){
    delete head;
    head = NULL;
    return;
  }

  Node* temp = head;

  while(temp->next->next){
    temp = temp->next;
  }

  delete temp->next;

  temp->next = NULL;
}

void deleteFromPosition(int pos){
  if(pos < 1){
    cout << "Position should be >=  1 " << endl;
    return;
  }
  if(pos == 1){
    deleteFromBeginning();
    return;
  }
  Node *temp = head;
  for(int i = 1 ; i < pos - 1 && temp; i++){
    temp = temp->next;
  }

  if(!temp || !temp->next){
    cout << "Position out of range" << endl;
  }

  Node *nodeToDelete = temp->next;
  temp->next = temp->next->next; // assigns the value of 
  delete nodeToDelete;



}

void Reverse(){ //for reversing a linkedlist
  Node  *next, *prev,*current;
  current = head;
  
  prev = NULL;

  while(current != NULL){
    next = current->next;
    current->next = prev; 
    prev = current;
    current = next;
  }
  head = prev;

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

l1.insertAtEnd(6);
l1.insertAtEnd(7);
l1.insertAtBeginning(10);
l1.insertAtEnd(8);
l1.insertAtPosition(12,2);
l1.insertAtPosition(45,3);

l1.display();
l1.Reverse();
l1.display();
  return 0;
}
    
