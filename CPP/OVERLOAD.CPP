#include<iostream.h>
#include<conio.h>
int volume(int s)
{
	return (s*s*s);
}
double volume(double r ,int h1)
{
	return(3.14*r*r*h1);
}
float volume(int l ,int b,int h2)
{
	return(l*b*h2);
}
int main()
{
	int s,h1,l,b,h2;
	double r;
	clrscr();
	cout<<"enter side of cube";
	cin>>s;
	cout<<"enter radius and height of cylinder:";
	cin>>h1;
	cout<<"enter length,breadth,height of rectangular box:";
	cin>>l>>b>>h2;
	cout<<" volume of cube="<<volume(s);
	cout<<"volume of cylinder= "<<volume(r,h1);
	cout<<"volume of rectangular box= "<<volume(l,b,h2);
	getch();
	return 0;

}