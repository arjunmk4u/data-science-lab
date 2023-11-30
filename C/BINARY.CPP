#include<iostream.h>
#include<conio.h>
#include<string.h>
class complex
{
   float x,y;
   public:
   complex()
   {}
   complex(float real,float imag)
   {
   x=real;
   y=imag;
   }
   complex operator +(complex);
   void display();
};
complex complex::operator + (complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return(temp);
}
void complex::display()
{
cout<<x<<"+j"<<y<<"\n";
}
int main()
{
	float a,b,c,d;
	clrscr();
	cout<<"enter a complex number:";
	cin>>a>>b;
	cout<<"enter the complex number to be added:";
	cin>>c>>d;
	complex c1,c2,c3;
	c1=complex(a,b);
	c2=complex(c,d);
	c3=c1+c2;
	cout<<"c1=";
	c1.display();
	cout<<"c2=";
	c2.display();
	cout<<"c3=";
	c3.display();
	getch();
	return 0;
}
