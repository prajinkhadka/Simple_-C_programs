#include<stdio.h>
#include<string.h>

int main()
{
	enum states {q0,q1,q2,q3,qf};
	char input[10];
	enum states curr_state = q0;
	int i = 0;
	int flag = 0;

	printf("Enter an email to check ");
	gets(input);
	char ch= input[i];
	while (ch != '\0')
	{
		switch(curr_state)
		{
			case q0:
			if(ch>'a' && ch<='z')
			curr_state=q1;
			else
			flag =1;
			break;

			case q1:
				if(ch=='@')
				curr_state=q2;
				else
				flag=1;
				break;

			case q2:
				if(ch==ch>'a' && ch<='z')
				curr_state=q3;
				else
				flag=1;
				break;
            case q3:
				if(ch=='.')
				curr_state=qf;
				else
				flag=1;
				break;

			case qf:
				if (ch==ch>'a' && ch<='z')
				curr_state=qf;
				else
				curr_state=qf;
				break;
		}
		if(flag)
		break;
		ch=input[++i];
	}
		if (curr_state==qf)
		printf("accepted");

		else
		printf("Not accepted");

	return 0;
}
