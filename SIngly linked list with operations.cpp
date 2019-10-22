//To implement list as a singly lniked list
#include<stdio.h>
#include<stdlib.h>

void insert_beg();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
void list();
void search();

struct node
{
	int data;
	struct node *next;
};

struct node *start = NULL;


int main()
{
	int ch;
	while(1)
	{
		system("CLS");
		printf("\nMENU");
		printf("\n1.Insert a node at beginning");
		printf("\n2.Insert a node at the end");
		printf("\n3.Insert a node at the given position");
		printf("\n4.List Node elements");
		printf("\n5.Delete a node at the beginning");
		printf("\n6.Delete a node at the end");
		printf("\n7.Delete a node at specified position");
		printf("\n8.Search a key in the list");
		printf("\n9.Exit");
		printf("\nEnter your choice\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insert_beg();
			break;
			
			case 2:insert_end();
			break;
			
			case 3: insert_pos();
			break;
			
			case 4: list();
			break;
			
			case 5: delete_beg();
			break;
			
			case 6: delete_end();
			break;
			
			case 7: delete_pos();
			break;
			
			case 8: search();
			break;
			
			case 9: exit(1);
			
			default:
				printf("\nInvalid Choice");
		}//end of switch
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
	if(nnode!=NULL)
	{
		nnode->data=x;
		nnode->next=start;
		start=nnode;
	}
	else
	{
		printf("\nMalloc failed");
	}
	printf("\nA nose was inserted");
}


void insert_end()
{
	int x;
	struct node *nnode,*temp;
	printf("\nEnter a number\t");
	scanf("%d",&x);
	nnode=(struct node*)malloc(sizeof(struct node));
	if(nnode!=NULL)
	{
		nnode->data=x;
		nnode->next=NULL;
		if(start=NULL)
		{
			start=nnode;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}//end of while
				temp->next=nnode;	
		}//end of if	
	}
	
	else
	{
		printf("\nMalloc failed");
	}
}

void insert_pos()
{
	int x,pos,i;
	struct node *nnode,*temp;
	nnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter position\t");
	scanf("%d",&pos);
	printf("\nEnter data\t");
	scanf("%d",&x);
	nnode->data=x;
	if(start==NULL)
	{
		printf("\nList is empty!node cannot be inserted");
	}
	else
	{
		temp=start;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
			if(temp==NULL)
				printf("\nInsufficient nodes!");
		}
		nnode->next=temp->next;
		temp->next=nnode;
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
		start=start->next;
		printf("\nDeleted element is %d",temp->data);
		free(temp);
	}
}

void delete_end()
{
	struct node *hold,*temp;
	
	if(start==NULL)
		printf("\nEmpty List");
	else if(start->next==NULL)
	{
		temp=start;
		start=NULL;
		printf("\nDeleted node is %d",temp->data);
		free(temp);
	}
	else
	{
		temp=start;
		while(temp->next->next!=NULL)
			{
			temp=temp->next;
			}
		hold=temp->next;
		//free(temp->next)
		temp->next=NULL;
		printf("\nDeleted element is %d",hold->data);
		free(hold);
	}
}

void delete_pos()
{
	struct node *temp,*hold;
	int pos,i;
	printf("\nEnter position\t");
	scanf("%d",&pos);
	if(start==NULL)
	{
		printf("\nList is empty");
	}
	else
	{
		temp=start;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
			if(temp==NULL)
				printf("\nInsufficient nodes");
		}
		
		hold=temp->next;
		temp->next=hold->next;
		printf("\nDeleted element is %d",hold->data);
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

void search()
{
	int key;
	struct node *temp;
	printf("\nEnter the key");
	scanf("%d",&key);
	if(start==NULL)
		printf("\nEmpty list");
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			if(temp->data==key)
			{
				printf("\nKey found");
				break;
			}
			temp=temp->next;
		}
		if(temp==NULL)
			printf("\nKey not found");
	}
}

