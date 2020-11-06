#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define MAXSIZE 10
struct arraystack
{
	int top;
	int capacity;
	int* array;
};
struct arraystack* createstack()
{
	struct arraystack* S=(struct arraystack* )malloc(sizeof(struct arraystack));
	
	if(!S)
	{return NULL;}
	
	S->capacity=MAXSIZE;
	S->top=-1;
	S->array=(int*)malloc(S->capacity*sizeof(int));
	
	if(S->array)
	{return NULL;}
	
	return S;
}
int isemptystack(struct arraystack* S)
{
	return (S->top==-1);
}
int isfullstack(struct arraystack* S)
{
	return (S->top==S->capacity-1);
}
void push(struct arraystack* S,int data)
{
	if(isfullstack(S))
	{printf("stack overflow");}
	else
	{S->array[++S->top]=data;}
}
int pop(struct arraystack* S)
{
	if(isemptystack(S))
	{
		printf("stack is empty");
		return INT_MIN;
	}
	else
	{return (S->array[S->top--]);}
}
void deletestack(struct arraystack* S)
{
	if(S)
	{
		if(S->array)
		{
			free(S->array);// note array is special
		}
		free(S);
	}
}
int main()
{
	return 0;
}
