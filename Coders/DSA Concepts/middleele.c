#include <stdio.h>

#include <stdlib.h>

int count=0;

struct Node { int data; struct Node *next; struct Node *prev; };

struct Node *head = NULL, *tail = NULL;

void insert(int value) {

struct Node *node = (struct Node *) malloc(sizeof(struct Node));

if (node == NULL) { printf("Full Linnked List\n"); } else { node->data = value; node->next = NULL; node->prev = NULL; if (head == NULL) {

head = node; tail = node;

} else {

node->prev = tail; tail->next = node;

tail = node;

}

} count++;

} void display() {

struct Node *temp = head; if (temp == NULL) { printf("Empty linked list"); } else {

printf("\n The linked list is : \n"); while (temp != NULL) { printf(" %d ", temp->data); temp = temp->next; } printf("\n");

} } void middle_node() { if(head!=NULL)

{

struct Node*p=head,*q=head;

while(q!=NULL && q->next != NULL && q->next->next != NULL) {

p = p->next;

q = q->next->next;

} if(count%2==0){ p=p->next; printf("\n Middle elemet is : %d\n",p->data);} else{ printf("\n Middle element is : %d\n",p->data); }

}else { printf("Empty linked list");

}

}

int main() { insert(1); insert(2); insert(3); insert(4); insert(5); insert(6);

display();

middle_node();

display(); middle_node();

return 0;

}
