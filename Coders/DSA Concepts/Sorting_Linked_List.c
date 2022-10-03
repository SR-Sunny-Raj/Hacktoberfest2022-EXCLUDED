#include<stdio.h>
#include<malloc.h>


struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;


struct node* getnewnode(int val)
{
	struct node* temp;
	temp= (struct node*)malloc(sizeof(struct node));
	temp->data =val;
	temp->next= NULL;
	return temp;
}
insertbeg(int val)
{
	struct node* ptr;
	ptr=getnewnode(val);
	ptr->next=head;
	head= ptr;
}

void swap(struct node *prev,struct node *current)
{
	int temp;
	temp=current->data;
	current->data=prev->data;
    prev->data=temp;

}
void sort()
{
	struct node* prev=head;
	struct node* current;
	current=prev->next;

	while (current->next!=NULL)
	{
		if (prev->data > current->data)
		{
			swap(prev,current);
			
		}
		current=current->next;
		prev=prev->next;
		
	}
}
print()
{
	struct node* run;
	run= head;
	while(run!=NULL)
	{
		printf("%d ", run->data);
		run=run->next;
		if (run!=NULL)
		{
		    printf("->");
		}
	}
	
	printf("\n");
}

void main()
{
	insertbeg(5);
	insertbeg(4);
	insertbeg(1);
	insertbeg(2);
	insertbeg(3);
	printf("Given linked list\n");
	print(); 
	
	printf("After sorting the linked list\n");
	sort();
	sort();
	print(); 


}

/* OUTPUT:

Given linked list
3 ->2 ->1 ->4 ->5
After sorting the linked list
1 ->2 ->3 ->4 ->5
*/
  
