#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
  char *name;
  int length;
  public:
  string()
  {
   length=0;
   name =new char[length+1];
   }
   string(char *s)
   {
    length=strlen(s);
    name=new char[length+1];
    strcpy(name,s);
    }
    void display()
    {
    cout<<name<<"\n";
    }
    void join(string &a,string &b);
};
void string::join(string &a,string &b)
{
 length=a.length+b.lengtg=h;
 delete name;
 name=new char[length+1];
 strcpy(name,a.name);
 strcat(name,b.name);
}
int main()
{
 char a[20],b[20],c[20];
 clrscr();
 cout<<"enter three names:\n";
 cin>>a>>b>>c;
 string name1(a),name2(b),name3(c)s1,s2;
 s1.join(name1,name2);
 s2.join(s1,name3);
 name1.display();
 name2.display();
 name3.display();
 s1.display();
 s2.display();
 getch();
 return 0;
 }
