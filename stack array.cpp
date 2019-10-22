//lab 7
//array implementation of stack
#include<stdio.h>
#include<stdlib.h>
#define MAX 10


struct stack
{
	int items[MAX];
	int top;
};

struct stack  s;
void push();
void pop();
void display();
int main()
{
	int ch;
	//s.top=-1;
	while(1)
	{
		system("CLS");
		printf("nMenu");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter your choice\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(1);
			break;
			default:
				printf("\nInvalid choice");
		}
		printf("\n");
		system("pause");
	}
	return 0;
	}

void push()
{
	int x;
	printf("\nEnter element to be inserted\t");
	scanf("%d",&x);
	if(s.top==MAX-1)
	printf("\nStack Full");
	else{
		s.top++;
		s.items[s.top]=x;
		printf("\nItem is pushed succesfully");
	}
}
void pop()
{
	if(s.top==-1)
	{
		printf("\nStack is empty");
	}
	else{
		printf("%d is popped",s.items[s.top]);
		s.top--;
	}
}

void display()
{
	int i;
	if(s.top==-1)
	{
		printf("\nStack is empty");
	}
	else{
		printf("\nStack items are:");
		for(i=s.top;i>=0;i--)
		{
			printf("\n%d",s.items[i]);
		}
	}
}
