#include<iostream>
#include<limits.h>
using namespace std;
const int MAXSIZE=10;
class stack
{
	public:
		int top;
		int capacity;
		int* array;
	public:
		stack()
			{
				top=-1;
				capacity=MAXSIZE;
				array=new(nothrow) int[MAXSIZE];
				if(array==NULL)
				{
					cout<<"memory is not enough";
					return;
				}
			}
			//////////////////////////////////////////
			int isfullstack()
			{return top==capacity-1;}
			////////////////////////////////////////
			int isemptystack()
			{return top==-1;}
			///////////////////////////////////////
			void push(int data)
			{
				if(isfullstack()==1)
				{
					cout<<"stack is full";
					return;
				}
				else
				{
					array[++top]=data;
				}
			}
			int pop()
			{
				if(top==-1)
				{
					cout<<"stack is empty";
					return INT_MIN;
				}
				return (array[top--]);
			}
			void deletestack()
			{
				stack* S=this;
				delete[] (S->array);
				delete S;
			}
};
int main()
{
	stack A;
	return 0;
}
