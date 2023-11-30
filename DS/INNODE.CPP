#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class node
{
	public:
	int data;
	node *next;
};
void push(node **head_ref,int new_data)
{
	node * newnode=new node();
	newnode->data=new_data;
	newnode->next=(*head_ref);
	(*head_ref)=newnode;
}
void insertafter(node *head,int x,int new_data)
{
	node *current=head;
	node * prev_node=NULL;
	while(current!=NULL)
	{
		if(current->data==x)
		{
			prev_node=current;
		}
		current=current->next;
	}
	if(prev_node==NULL)
	{
		cout<<"the given previous node does not exist";
		return;
	}
	node * newnode=new node();
	newnode->data=new_data;
	newnode->next=prev_node->next;
	prev_node->next=newnode;
}
void append(node **head_ref,int new_data)
{
	node * newnode=new node();
	node * last=* head_ref;
	newnode->data=new_data;
	newnode->next=NULL;
	if(*head_ref==NULL)
	{
		*head_ref=newnode;
		return;
	}
	while(last->next!=NULL)
	{
	last=last->next;
	}
	last->next=newnode;
	return;
	}
	void printlist(node *node)
	{
	while(node!=NULL)
	{
	cout<<" "<<node->data;
	node=node->next;
	}
}
int main()
{
clrscr();
int option,data1,data2;
node * head=NULL;
do
{
cout<<"ehat operation do you want to perform?.enter 0 to exit."<<endl;
cout<<"1.insert at beginning"<<endl;
cout<<"2.insert at end"<<endl;
cout<<"3.insert after element"<<endl;
cout<<"4.display"<<endl;
cin>>option;
switch(option)
{
	case 0:break;
	case 1:cout<<"enter elemnet"<<endl;
	cin>>data1;
	push(& head,data1);
	break;
	case 2:cout<<"enter elemnet"<<endl;
	cin>>data1;
	push(& head,data1);
	break;
	case 3:cout<<"enter  previous elemnet to be inserted"<<endl;
	cin>>data2>>data1;
	insertafter(head,data2,data1);
	break;
	case 4:printlist( head);
	break;
	default:cout<<"enter proper option no";
	}

}while(option!=0);
getch();
return 0;
}