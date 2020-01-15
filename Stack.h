#pragma once
#include<stdio.h>

typedef struct Stack
{
	int top;
	int arr[5];
}Stack;

int isEmpty(Stack *);
int isFull(Stack *);
void push(Stack *);
int pop(Stack *);
void displayStack(Stack *s);