#include<iostream.h>
#include<conio.h>
class selection
{
	int a[20],i,n,min,loc,j,temp;
	public:
	void read();
	void print();
};
void selection::read()
{
	cout<<"enter the limit:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	cin>>a[i];
}
void selection::print()
{
	min=0;loc=0;temp=0;
	for(i=0;i<n;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		if(loc!=1)
		{
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		}
	}
	cout<<"sorted array is:";
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
}
int main()
{
	selection s;
	clrscr();
	s.read();
	s.print();
	getch();
	return 0;
}