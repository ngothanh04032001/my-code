#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* next;
	public:
		void getdata(int data1)
		{
			data=data1;
		}
};
class linklist
{
	public:
		node*head;
	public:
		linklist():head(NULL){}
///////////////	///////////////////////////////////	/////////////////////////
	    int linklength()
	    {
	    	node* p=head;
	    	int count=0;
	    	while(p!=NULL)
	    	{
	    		p=p->next;
	    		count++;
			}
			return count;
		}
//////////////////////////////	////////////////	/////////////////////////////////////////////////////
		void inserlinklist(int data,int position)
		{
			node* newnode=new node;
			newnode->data=data;
			
			if(position==1)
			{
				newnode->next=head;
				head=newnode;
			}
			else
			{
				node* p=head;
				node* q=head;
				int k=1;
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
				{cout<<"this position does't exit";}
			}
		}
//////////////////////////		/////////////////////////////////////////
		void deletenodefromlinklist(int position)
		{
			node* p=head;
			node*q=p;
			int k=1;
			while((p!=NULL)&&(k<position))
			{
				q=p;
				p=p->next;
				k++;
			}
			if(k==position)
			{
				q->next=p->next;
				delete p;
			}
			else
			{
				cout<<"this position does't exit";
			}
		}
};
int main()
{
	linklist A;
	A.inserlinklist(4,1);
	A.inserlinklist(4,2);
	A.inserlinklist(3,3);
	A.inserlinklist(8,4);
	A.deletenodefromlinklist(2);
	return 0;
}
