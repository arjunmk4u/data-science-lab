#include<iostream.h>
#include<conio.h>
class student
{
	int rollno,m1,m2,m3,t;
	char name[10],g;
	public:
	void getdata();
	void putdata(0;
	void grade();
};
void student::getdata()
{
     cout<<"enter rollno:";
     cin>>rollno;
     cout<<"enter name:";
     cin>>name;
     cout<<"enter 3 marks:";
     cin>>m1>>m2>>m3;
     grade();
}
void student::grade()
{
     t=m1+m2+m3;
     if(t>=90)
     g='s';
     else if(t>=80 && t<90)
     g='a';
      else if(t>=70 && t<80)
     g='b';
      else if(t>=60 && t<70)
     g='c';
      else if(t>=50 && t<60)
     g='d';
      else if(t>=40 && t<50)
     g='e';
     else
     g='f';
}
void student::putdata()
{
 cout<<"\n rollno:"<<rollno;
 cout<<"\n name:"<<name;
 cout<<"\n total:"<<t;
 cout<<"\n trade:"<<g;
 }
 int main()
 {
   int n,i;
   clrscr();
   student r[10];
   cout<<"enter no.of student";
   cin>>n;
   for(i=0;i<n;i++)
   r[i].getdata();
   for(i=0;i<n;i++)
   r[i].putdata();
   getch();
   return 0;
   }