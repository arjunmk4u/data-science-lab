#include<iostream.h>
#include<conio.h>
class insertion
{
	int a[20],i,n,k,j,temp;
	public:
	void read();
	void sort();
};
void insertion::read()
{
	cout<<"enter the limit:";
	cin>>n;
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	cin>>a[i];
}
void insertion::sort()
{
	for(k=1;k<n;k++)
	{
		temp=a[k];
		j=k-1;
		while(j>=0 && temp<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"\n sorted array is:";
	for(i=0;i<n;i++)
	cout<<" "<<a[i];
}