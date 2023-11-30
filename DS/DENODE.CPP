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
node * dbeg(node *head)
{
	if(head==NULL)
	{
		return NULL;
	}
	node *temp=head;
	head=head->next;
	delete temp;
	return head;
}

node * dend(node *head)
{
	if(head==NULL)
	{
	return NULL;
	}
	if(head->next==NULL)
	{
	delete head;
	return NULL;
	}
	node * second_last=head;
	while(second_last->next!=NULL)
	{
	second_last=second_last->next;
	}
	delete(second_last->next);
	second_last->next=NULL;
	return head;
}
void dpos(node * * head_ref,int position)
{
if(* head_ref==NULL)
{
return ;
}
node * temp=*head_ref;
if(position==0)
{
*(head_ref)=temp->next;
free(temp);
return ;
}
for(int i=0;temp!=NULL && i<position-2;i++)
{
temp=temp->next;
}
if(temp==NULL || temp->next->next)
{
return ;
}
node * next=temp->next->next;
free(temp->next);
temp->next=next;
}
void printlist(node * node)
{
while(node!=NULL)
{
cout<<" "<<node->data;
node=node->next;
}
}
int main()
{
int option,data1;
clrscr();
node * head=NULL;
do
{
cout<<"what operation do you want to perform?.enter 0 to exit."<<endl;
cout<<"1.insert "<<endl;
cout<<"2.delete at beginning"<<endl;
cout<<"3.delete at end"<<endl;
cout<<"4.delete at position"<<endl;
cout<<"5.display"<<endl;
cin>>option;
switch(option)
{
	case 0:break;
	case 1:cout<<"enter element"<<endl;
	cin>>data1;
	push(& head,data1);
	break;
	case 2: head=dbeg(head);
	break;
	case 3:head=dend(head);
	break;
	case 4:cout<<"enter position";
	cin>>data1;
	dpos(&head,data1);
	break;
	case 5:printlist(head);
	break;
	default:cout<<"enter proper option no";
	}

}while(option!=0);
getch();
return 0;
}
