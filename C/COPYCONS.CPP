#include<iostream.h>
#include<conio.h>
class code
{
    int id;
    public:
    code() {}
    code(int a)
    { id=a;}
    code(code &x)
    { id=x.id;}
    void display()
    {
    cout<<id;
    }
};
int main()
{
 int x;
 clrscr();
 cout<<"enter thevalue to be copied:";
 cin>>x;
 code a(x);
 code b(a);
 code c=a;
 code d;
 d=a;
 cout<<"\n id ofa=";a.display();
 cout<<"\n id ofb=";b.display();
 cout<<"\n id ofc=";c.display();
 cout<<"\n id ofd=";d.display();
 getch();
 return 0;
 }