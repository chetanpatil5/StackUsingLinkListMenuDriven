#include<stdio.h>
#include "Stack.h"

int isEmpty(Stack *s)
{
	if (s->top == -1)
	{
		return 1;
	}
	else
		return 0;
}
int isFull(Stack *s)
{
	if (s->top >= 4)
	{
		return 1;
	}
	else
		return 0;

}
void push(Stack *s)
{
	int val = 0;
	if (!isFull(s ))
	{
		s->top++;
		printf("\nEnter the value to be pushed in stack\n");
		scanf_s("%d", &val);
		s->arr[s->top] = val;	
	}
	else
	{
		printf("\nNo more elements can be added");
	}
}
int pop(Stack *s)
{
	int val = 0;
	if (!isEmpty(s))
	{
		val = s->arr[s->top];
		s->top--;
		printf("\nElement %d deleted successfully",val);
		return 0;//0is returned because if top =0 then top-- top=-1 will be retunred
	}
	else
	{
		return -1;//if -1 is returned then element cannot be deleted
	}

}

void displayStack(Stack *s)
{
	for (int i = 0; i<=s->top; i++)
	{
		printf("%d -> ",s->arr[i]);
		
	}
}