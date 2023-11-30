#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int rollno;
	char name[20];
	public:
	void read()
	{
		cout<<"enter rollno:";
		cin>>rollno;
		cout<<"enter name:";
		cin>>name;
	}
	void print()
	{
		cout<<"\n rollno="<<rollno;
		cout<<"\n name="<<name;
	}
};
class academics
{
	protected:
	int m1,m2,m3;
	public:
	int totalmark;
	void readmark();
	void printmark();
};
void academics::readmark()
{
	cout<<"enter 3 marks=";
	cin>>m1>>m2>>m3;
}
void academics::printmark()
{
	totalmark=m1+m2+m3;
	cout<<"\n totalmark="<<totalmark;
}
class cocurricular
{
	public:
	int score;
	void getscore()
	{
		cout<<"enter cocurricular score:";
		cin>>score;
	}
	void putscore()
	{
		cout<<"\n score="<<score;
	}
};
class result:public student,public academics,public cocurricular
{
	public:
	void putresult()
	{
		int result;
		result=totalmark+score;
		cout<<"\n result="<<result;
	}
};
int main()
{
	result r;
	clrscr();
	r.read();
	r.readmark();
	r.getscore();
	r.print();
	r.printmark();
	r.putscore();
	r.putresult();
	getch();
	return 0;
}
