#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int rollnumber;
	public:
	void get_num(int);
	void put_num();
};
void student::get_num(int a)
{
	rollnumber=a;
}
void student::put_num()
{
	cout<<"roll number:"<<rollnumber;
}
class test:public student
{
	protected:
	float sub1,sub2;
	public:
	void get_marks(float,float);
	void put_marks();
};
void test::get_marks(float x,float y)
{
	sub1=x;
	sub2=y;
}
void test::put_marks()
{
	cout<<"marks in sub1="<<sub1;
	cout<<"marks in sub2="<<sub2;
}
class result:public test
{
float total;
public:
void display();
};
void result::display()
{
	total=sub1+sub2;
	put_num();
	put_marks();
	cout<<"total="<<total;
}
int main()
{
int a;
float b,c;
clrscr();
result student1;
cout<<"enter rollno:";
cin>>a;
cout<<"enter 2 marks:";
cin>>b>>c;
student1.get_num(a);
student1.get_marks(b,c);
student1.display();
getch();
return 0;
}