//to implement list as doubly linked list

#include<stdio.h>
#include<stdlib.h>

void insert_beg();
void insert_end();
void insert_pos();
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
		nnode->prev=NULL;
		nnode->next=NULL;
	}
	else{
		nnode->next=start;
		nnode->prev=NULL;
		start->prev=nnode;
		start=nnode;
	}
	printf("\nA node was inserted");
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
		nnode->prev=NULL;
		nnode->next=NULL;
	}
	else{
		temp=start;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=nnode;
		nnode->prev=temp;
		nnode->next=NULL;
	}
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
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		hold=temp->next;
		temp->next=NULL;
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
		while(temp->next!=NULL)
		{
			printf("\t%d",temp->data);
			temp=temp->next;
		}
		printf("\t%d",temp->data);
	}
}


