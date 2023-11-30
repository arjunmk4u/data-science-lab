#include<iostream.h>
#include<conio.h>
class interest
{
	float i;
	public:
	void display();
	void calculate(float p,int n,float r=0.5);
};
void interest::calculate(float p,int n,float r)
{
	i=p*n*r;
}
void interest::display()
{
	cout<<"\n simple interest="<<i;
}
int main()
{
	int n;
	float p ,r;
	clrscr();
	cout<<"enter principle amount:";
	cin>>p;
	cout<<"enter number of years:";
	cin>>n;
	cout<<"enter rate of interest:";
	cin>>r;
	interest a,b;
	a.calculate(p,n,r);
	b.calculate(p,n);
	cout<<" \n interest with given valueofr";
	a.display();
	cout<<"\n interest with default value of r";
	b.display();
	getch();
	return 0;

}