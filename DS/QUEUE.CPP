#include<iostream.h>
#include <conio.h>
#include <stdlib.h>
#define max 10
class queue
{
	int q[10], rear, front, item;
	public: queue()
		{
			rear=front = 0;
		}
		void insertion();
		void deletion();
		void traversal ();
};

void queue::insertion()
{
	if(rear==max)
	cout<<"\n Overflow";
	else
	cout<<"\n Enter item to be inserted";
	cin>>item;
	if(rear==0)
	{
		rear=front=1;
		q[rear]=item;

	}
	else
	{
		rear=rear+1;
		q[rear]=item;
	}
}
void queue:: deletion()
{
	if(rear==0)
	{
	cout<<"\nUnderflow";
	}
	else if(front==rear==1)
	{
		item=q[front];
		front=rear=0;
		cout<<"\nItem deleted";
	}
	else
	{
		item=q[front];
		front = front + 1;
		cout<<"\nItem deleted";
	}
}
void queue::traversal()
{
	if(rear==0)
	cout<<" in Queue empty";
	else
	{
		for(int i= front; i<=rear; i++)
			cout<<"\n "<<q[i];
	}
}
int main()
{
	queue ob;
	int c;
	clrscr;
	while(1)
	{
		cout<<" \n1)INSERTION\n2)DELETION\n3)TRAVERSAL\n4)EXIT\nEnter your choice:";
		cin>>(c);
		switch(c)
		{
		case 1: ob.insertion();
		break;
		case 2: ob.deletion();
		break;
		case 3: ob.traversal();
		break;
		case 4: exit (1);
		break;
		default:cout<<"\nInvalid choice'";
		}
	}
	getch();
	return 0;
}
