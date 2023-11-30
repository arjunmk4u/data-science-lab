#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push()
{
	int item;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"enter item to be inserted";
	cin>>item;
	newnode->data=item;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==NULL
	)
	{
		cout<<"underflow";
	}
	else
	{
		cout<<"deleted item="<<top->data;
		top=top->next;
	}
}
void traverse()
{
	struct node *ptr;
	if(top==NULL)
	{
	cout<<"stack empty";
	}
	else
	{
	ptr=top;
	cout<<"stack elements are";
	while(ptr!=NULL)
	{
	cout<<ptr->data<<"\n";
	ptr=ptr->next;
	}
	}
}
int main()
{
int c;
clrscr();
while(1)
{
	cout<<"\n 1.push \n 2.pop \n 3.traverse \n 4.exit \n enter your choice:";
	cin>>c;
	switch(c)
	{
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:traverse();
	break;
	case 4:exit(1);
	break;
	default: cout<<"\n invalid choice";
	}
}
getch();
return 0;
}

