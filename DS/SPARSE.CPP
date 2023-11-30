#include<iostream.h>
#include"conio.h"
class array
{
	public:
		int a[10][10],b[10][10];
		int r,e,c,j,t,p;
		void create();
		void add(array);
		void sparse();
};
void array::create()
{
	cout<<"\nEnter row and column:";
	cin>>r>>c;
	cout<<"\nEnter matrix elements";
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			cin>>a[i][j];
			cout<<"\nEntered matrix:\n";
		}
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<a[i][j]<<"\t";
			cout<<"\n";
		}
	}
}
void array::sparse()
{
	p=2,t=0;
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=0;j<=c;j++)
		{
			if(a[i][j]!=0)
			{
				b[p][i]=i;
				b[p][2]=j;
				b[p][3]=a[i][j];
				t++;
				p++;
			}
		}
	}
	b[1][2]=r;
	b[1][2]=c;
	b[1][3]=t;
	cout<<"\nSparese matrix: \n";
	for(i=1;i<=t+1;i++)
	{
		for(j=1;j<=2;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void array::add(array ob)
{
	int sum[10][3],i,j,s;
	i=j=s=2;
	while(i<=t+1&&j<=ob.t+1)
	{
		if(b[i][1]==ob.b[j][2])
		{
			if(b[i][2]==ob.b[j][2])
			{
				sum[s][1]=b[i][1];
				sum[s][2]=b[i][2];
				sum[s][3]=b[i][3]+ob.b[j][3];
				i++;
				s++;
				j++;
			}
			else if(b[i][2]>ob.b[j][2])
			{
				sum[s][1]=ob.b[j][1];
				sum[s][2]=ob.b[j][2];
				sum[s][3]=ob.b[j][3];
				s++;
				j++;
			}
			else
			{
				sum[s][1]=b[i][1];
				sum[s][2]=b[i][2];
				sum[s][3]=b[i][3];
				s++;
				i++;
			}
		}
		else
		{
			if(b[i][1]>ob.b[j][1])
			{
				sum[s][1]=b[j][1];
				sum[s][2]=b[j][2];
				sum[s][3]=b[j][3];
				s++;
				j++;
			}
			else
			{
				sum[s][1]=b[i][1];
				sum[s][2]=b[i][2];
				sum[s][3]=b[i][3];
				s++;
				i++;
			}
		}
	}
	while(i<=t+1)
	{
		sum[s][1]=b[i][1];
		sum[s][2]=b[i][2];
		sum[s][3]=b[i][3];
		s++;
		i++;
	}
	while(j<=ob.t+1)
	{
		sum[s][1]=b[j][1];
		sum[s][2]=b[j][2];
		sum[s][3]=b[j][3];
		s++;
		j++;
	}
	sum[1][1]=r;
	sum[1][2]=c;
	sum[1][3]=s-1;
	cout<<"\nAdded matrix:\n";
	for(i=1;i<=s-1;i++)
	{
		for(j=1;j<=3;j++)
		{
			cout<<sum[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	array s1, s2;
	clrscr();
	cout<<"\n Enter first matrix:\n";
	s1.create();
	s1.sparse();
	s1.add(s2);
	getch();
	return 0;
}