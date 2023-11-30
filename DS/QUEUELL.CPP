
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
struct node *temp;
void insert()
{
	int val;
	cout<<"enter item to be inserted";
	cin>>val;
	if(rear==NULL)
	{
	rear=(struct node*)malloc(sizeof(struct node));
	rear->next=NULL;
	rear->data=val;
	front =rear;
	}
	else
	{
	temp=(struct node*)malloc(sizeof(struct node));
	rear->next=temp;
	rear->data=val;
	temp->next=NULL;
	rear=temp;
	}
}
void delet()
{
	temp=front;
	if(front==NULL)
	{
		cout<<"underflow";
		return;
	}
	else if(temp->next!=NULL)
	{
		temp=temp->next;
		cout<<"deleted item="<<front->data;
		free(front);
		front=temp;
	}
	else
	{
		cout<<"element deleted:"<<front->data;
		free(front);
		front=NULL;
		rear=NULL;
	}
}
void traverse()
{
	temp=front;
	if((front==NULL) && (rear==NULL))
	{
	cout<<"queue empty";
	return;
	}
	else
	{
	cout<<"queue elements are";
	while(temp!=NULL)
	{
	cout<<temp->data<<"\n";
	temp=temp->next;
	}
	}
}
int main()
{
int c;
clrscr();
do
{
	cout<<"\n 1.insertion \n 2.deletion \n 3.traverse \n 4.exit \n enter your choice:";
	cin>>c;
	switch(c)
	{
	case 1:insert();
	break;
	case 2:delet();
	break;
	case 3:traverse();
	break;
	case 4:exit(1);
	break;
	default: cout<<"\n invalid choice";
	}
}while(1);
getch();
return 0;
}


