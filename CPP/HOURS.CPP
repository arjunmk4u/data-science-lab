#include<iostream.h>
#include<conio.h>
class time
{
  int hour,min,h,m;
  public:
  void gettime(int h,int m)
  {
  cout<<"enter hours:";
  cin>>h;
  hour=h;
  cout<<"enter minutes:";
  cin>>m;
  min=m;
  }
  void puttime()
  {
  cout<<hour<<"hours and";
  cout<<min<<"minutes"<<"\n";
  }
  time sum(time,time)
  };
  time time::sum(time t1,time t2)
  {
  time t;
  mins=t1.min+t2.min;
  hour=min/60;
  min=min%60;
  hour=hour+t1.hour+t2.hour;
  return t;
  }
  int main()
  {
  int h,m;
  time t1,t2,t3;
  clrscr();
  t1.gettime(h,m);
  t2.gettime(h,m);
  t3.sum(t1,t2);
  cout<<"t1=";t1.puttime();
  cout<<"t2=";t2.puttime();
  cout<<"t3=";t3.puttime();
  getch();
  return 0;
  }