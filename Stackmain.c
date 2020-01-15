#include<stdio.h>
#include "Stack.h"

int main()
{
	struct Stack s1;
	s1.top = -1;
	int ch=0;
	char choice = ' ';
	int a = 0;

	for (int i = 0; i < 5; i++)
	{
		s1.arr[i] = 0;
	}

	do
	{
		printf("\n1. Push ");
		printf("\n2. Pop ");
		printf("\n3. Display \n");
		scanf_s("%d",&ch);

		switch (ch)
		{
		case 1:push(&s1);
			break;
		case 2:
			 a = pop(&s1);
			if (a == -1)
			{
				printf("Element cannot be deleted ");
			}
			break;
		case 3:displayStack(&s1);
			break;
		default:
			break;
		}


		printf("\n\nContinue y/n : ");
		scanf_s("%c", &choice);
		scanf_s("%c", &choice);
	} while (choice == 'y' || choice == 'Y');

	
	

	system("pause");
	return 0;
}