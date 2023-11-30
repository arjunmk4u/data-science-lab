#include<iostream.h>
#include<conio.h>
class employee
{
	int empid;
	float salary,hra,da,bp;
	char name[20];
	public:
	void getdata();
	void calculate();
	void display();
};
void employee::getdata()
{
	cout<<"enter empid:";
	cin>>empid;
	cout<<"enter empname:";
	cin>>name;
	cout<<"enter basic pay:";
	cin>>bp;
}
void employee::calculate()
{
	hra=50*(bp/100);
	da=30*(bp/100);
	salary=hra+da+bp;
}
void employee::display()
{
	cout<<"salary slip of emloyee";
	cout<<"\n empid:"<<empid;
	cout<<"\n name:"<<name;
	cout<<"\n basic pay:"<<bp;
	cout<<"\n hra:"<<hra;
	cout<<"\n da:"<<da;
	cout<<"\n total salary:"<<salary;
}
int main()
{
	employee e;
	clrscr();
	e.getdata();
	e.calculate();
	e.display();
	getch();
	return 0;
}
