#include<stdio.h>
#include<stdlib.h>
struct listnode
{
	int data;
	struct listnode* next;
};
int listlength(struct listnode* head)
{
	struct listnode* current=head;
	int count=0;
	while(current!=NULL)
	{
		count++;
		current=current->next;
	}
	return count;
}
void insertinlinkedlist(struct listnode**head,int data,int position)
{
	struct listnode* newnode;
	newnode=(struct listnode*)malloc(sizeof(struct listnode));
	if(newnode)
	{
		printf("memory eror");
		return ;
	}
	newnode->data=data;
//////////////////////////////////////	//////////////////////////////////////////////////////////////////////////////
	if(position==1)
	{
		newnode->next=*head;
		*head=newnode;
	}
	else
	{
		struct listnode* p=*head;
		struct listnode* q=*head;
		int k=0;
		while((p!=NULL)&&(k<position))
		{
			q=p;
			p=p->next;
			k++;
		}
		if(k==position)
		{
			newnode->next=p;
			q->next=newnode;
		}
		else
		{printf("does't exits that position");}
	}
}
void deletenodefromlinkerlist(struct listnode** head,int position)
{
	struct listnode* p=*head;
	struct listnode* q=*head;
	int k=0;
	while((p!=NULL)&&(k<position))
	{
		q=p;
		p=p->next;
		k++;
	}
	if(k==position)
	{
		q->next=p->next;
		free(p);
	}
	else
	{printf("does't exits that position");}
}
void deletelinkerlist(struct listnode**head)
{
	struct listnode*p=*head;
	struct listnode*q=*head;
	while(p!=NULL)
	{
		q=p;
		p=p->next;
		free(q);
	}
	*head=NULL;
}
int main()
{
	return 0;
}
