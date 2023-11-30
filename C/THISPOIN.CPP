#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
	char name[20];
	float age;
	public:
	person(char * s,float a)
	{
		strcpy(name,s);
		this->age=a;
	}
	void display()
	{
	cout<<"name="<<name;
	cout<<"age="<<age<<"\n";
	}
	person & greater(person & s);
};
person & person::greater(person & x)
{
	if(x.age>=age)
	return x;
	else
	return *this;
}
int main()
{
 char a[20],b[20],c[20];
 float i,d,e,f;
 clrscr();
 cout<<"enter 1st name:";
 cin>>a;
 cout<<"enter age";
 cin>>d;
 cout<<"enter 2nd name";
 cin>>b;
 cout<<"enter age";
 cin>>e;
 cout<<"enter 3rd name";
 cin>>c;
 cout<<"enter age";
 cin>>f;
 person p1(a,d),p2(b,e),p3(c,f);
 person p=p1.greater(p3);
 cout<<"enter among 1st and 3rd person is: ";
 p.display();
 p=p1.greater(p2);
 cout<<"enter among 1st and 2nd person is: ";
 p.display();
 getch();
 return 0;
 }

