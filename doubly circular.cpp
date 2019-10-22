//to implement list as doubly circular linked list

#include<stdio.h>
#include<stdlib.h>

void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void list();

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

struct node *start=NULL;
struct node *last=NULL;

int main()
{
	int ch;
	while(1)
	{
		system("CLS");
		printf("\nMENU");
		printf("\n1.Insert a node at beginning");
		printf("\n2.Insert a node at the end");
		printf("\n3.List Node elements");
		printf("\n4.Delete a node at the beginning");
		printf("\n5.Delete a node at the end");
		printf("\n6.Exit");
		printf("\nEnter your choice\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insert_beg();
			break;
			
			case 2:insert_end();
			break;
			
			
			case 3: list();
			break;
			
			case 4: delete_beg();
			break;
			
			case 5: delete_end();
			break;
			
			case 6: exit(1);
			
			default:
				printf("\nInvalid Choice");
		}//end of switch
		printf("\n");
		system("pause");
	}//end of while
	return 0;
}//end of main

void insert_beg()
{
	int x;
	struct node *nnode;
	nnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter a number to be inserted\t");
	scanf("%d",&x);
	nnode->data=x;
	if(start==NULL)
	{
		start=nnode;
		nnode->prev=nnode;
		nnode->next=nnode;
	}
	else{
		nnode->next=start;
		nnode->prev=last;
		start->prev=nnode;
		last->next=nnode;
		start=nnode;
	}
	printf("\nA node was inserted at the beginning");
}

void insert_end()
{
	int x;
	struct node *nnode,*temp;
	printf("\nEnter a number\t");
	scanf("%d",&x);
	nnode=(struct node*)malloc(sizeof(struct node));
	nnode->data=x;
	if(start==NULL)
	{
		start=nnode;
		nnode->prev=nnode;
		nnode->next=nnode;
	}
	else{
		temp=start;
		while(temp->next!=start)
		temp=temp->next;
		temp->next=nnode;
		nnode->prev=temp;
		nnode->next=start;
		start->prev=last;
	}
	printf("\nA node was inserted at the end");
}

void delete_beg()
{
	struct node *temp;
	if(start==NULL)
		printf("\nList is empty");
	else
	{
		temp=start;
		temp->next->prev=NULL;
		start=temp->next;
		last->next=start;
		free(temp);
		
	}
}

void delete_end()
{
	struct node *hold,*temp;
	
	if(start==NULL)
		printf("\nEmpty List");
	else
	{
		temp=start;
		while(temp->next->next!=start)
		{
			temp=temp->next;
		}
		hold=temp->next;
		temp->next=start;
		free(hold);
	}
}


void list()
{
	struct node *temp;
	if(start==NULL)
		printf("\nEmpty List");
	
	else{
		temp=start;
		while(temp->next!=start)
		{
			printf("\t%d",temp->data);
			temp=temp->next;
		}
		printf("\t%d",temp->data);
	}
}


