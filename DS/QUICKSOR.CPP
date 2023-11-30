#include<iostream.h>
#include<conio.h>
#define max 100
class quicksort
{
	int i,l,h;
	public:
	void output(int *,int);
	void quick(int *,int,int);
};
void main()
{
	int i,l,h,n,a[max];
	clrscr();
	quicksort q;
	cout<<"how many element in the array:";
	cin>>n;
	cout<<"enter the element in the array:";
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	l=0;
	h=n-1;
	q.quick(a,l,h);
	cout<<"sorted array:";
	q.output(a,n);
	getch();
}
void quicksort::quick(int a[],int l,int h)
{
	 int temp,key,low,high;
	 low=l;
	 high=h;
	 key=a[(low+high)/2];
	 do
	 {
		while(key>a[low])
		{
			low++;
		}
		while(key<a[high])
		{
			high--;
		}
		if(low<=high)
		{
			temp=a[low];
			a[low+1]=a[high];
			a[high--]=temp;
		}
	 }while(low<=high);
	 if(l<high)
	 {
		quick(a,l,high);
	 }
	 if(low<h)
	 {
		quick(a,low,h);
	 }
}
void quicksort :: output(int a[],int n)
{
	for(i=0;i<=n-1;i++)
	{
		cout<<" "<<a[i];
	}
}