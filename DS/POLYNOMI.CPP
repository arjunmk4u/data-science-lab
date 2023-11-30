#include<iostream.h>
#include<conio.h>
class polynomial
{
	public:
	int degree;
	int coeff[10];
	void read();
	void display();
	polynomial add(polynomial p);
};
	void polynomial::read()
	{
		cout<<"enter highest degree of polynomial:";
		cin>>degree;
		for(int i=degree;i>=0;i--)
		{
			cout<<"\n enter coefficient of x"<<i<<":";
			cin>>coeff[i];
		}
	}
void polynomial::display()
{
	for(int i=degree;i>=0;i--);
	{
		cout<<coeff[i]<<"x"<<i<<"+";
	}
}
polynomial polynomial::add(polynomial p)
{
	int m,i;
	polynomial ob;
	if(degree<p.degree)
	{
		m=degree;
	}
	else
	{
		m=p.degree;
	}
	for(i=0;i<=m;i++)
	{
		ob.coeff[i]=coeff[i]+p.coeff[i];
		ob.degree=degree;
	}
	if(degree>=m)
	{
		for(i=m+1;i<=degree;i++)
		{
			ob.coeff[i]=coeff[i];
			ob.degree=degree;
		}
	}
	if(p.degree>m)
	{
		for(i=m+1;i<=degree;i++)
		{
			ob.coeff[i]=p.coeff[i];
			ob.degree=degree;
		}
	}
	return(ob);
}
int main()
{
	polynomial p1,p2,p3;
	clrscr();
	p1.read();
	p2.read();
	cout<<"\n first polynamial:\n";
	p1.display();
	cout<<"\n second polynamial:\n";
	p2.display();
	p3=p1.add(p2);
	cout<<"\n added polynamial:\n";
	p3.display();
	getch();
	return 0;
}