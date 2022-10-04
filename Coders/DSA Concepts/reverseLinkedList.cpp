#include <iostream>
using namespace std ;

class Node{
   public:
   int data;
   Node* next;

// CONSTRUCTOR
Node ( int data){
    this -> data = data ;
    this -> next = NULL ;
}   
};

void insertAtHead( Node* &head,int data){
    Node* New = new Node(data);
    New -> next = head ;
    head = New ;
};

void printNode(Node* &head){
  Node* New = head ;

  while ( New != NULL)
  {
    cout << New -> data << " ";
    New = New -> next ;
  }
  cout << endl ;
};

void reverseLinkedList(Node* &head){

    Node* prev = NULL;
    Node* current = head ;
    Node* forward = NULL ;

    while (current != NULL)
    {
      forward = current -> next ;
      current -> next = prev ;
      prev = current ;
      current = forward ;
    }
     head = prev ;

};

void recurisionReverse(Node* &head ,Node* current ,Node* prev){

  if (current == NULL)
  {
    head = prev;
    return;
  }

  Node* forward = current -> next ;
  recurisionReverse( head ,forward , current ); 
  current -> next = prev ;

};

int main(){

 Node* N2 = new Node(10);
 Node* head = N2;
//   cout << N2 -> data <<endl;
// printNode(head);

// USING NORMAL 

// insertAtHead(head,25);
// printNode(head);

// insertAtHead(head,50);
// printNode(head);

// // reverseLinkedList(head);
// printNode(head);


//   USING RECURISION 
insertAtHead(head,25);
printNode(head);

insertAtHead(head,50);
printNode(head);

cout << " REVERSE "<< endl ;
Node* current = head ;
Node* prev = NULL ;
recurisionReverse(head,current,prev);
printNode(head);

    return 0;