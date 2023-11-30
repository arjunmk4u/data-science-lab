#include<iostream.h>
#include<conio.h>
class space
{
	int x,y,z;
	public:
		void getdata(int a, int b,int c);
		void display();
		space operator -();
};
void space::getdata(int a,int b, int c)
{
	x=a;
	y=b;
	z=c;
}
void space::display()
{
	cout<<"x="<<x<<" ";
	cout<<"y="<<y<<" ";
	cout<<"z="<<z<<" ";
}
space space::operator -()
{
	space p;
	p.x=-x;
	p.y=-y;
	p.z=-z;
	return p;
}
 int main()
 {
 int a,b,c;
 clrscr();
 cout<<"enter three numbers:";
 cin>>a>>b>>c;
 space s1