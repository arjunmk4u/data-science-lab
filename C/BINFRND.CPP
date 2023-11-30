#include<iostream.h>
#include<conio.h>
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
   friend complex operator +(complex,complex);
   void display();
};
complex operator + (complex c1,complex c2)
{
complex temp;
temp.x=c1.x+c2.x;
temp.y=c1.y+c2.y;
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
