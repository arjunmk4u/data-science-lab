#include<iostream.h>
#include<conio.h>
main()
{
  int n, i,first=0,last,pos=-1,a[10],mid,e;

  clrscr();
  cout<<"enter the limit";
  cin>>n;
  last=n-1;
  cout<<"enter the elements in an array";
  for(i=0;i<n;i++)
 {
    cin>>a[i];
 }
  cout<<"enter the element";
  cin>>e;
  for(i=0;i<=n;i++)
 {
   mid=(first+last)/2;
   if (a[mid]==e)
{
   pos=mid;
  cout<<"element found at position"<<pos;
  break;
}
  else if(a[mid]>e)
  {
    last=mid-1;
  }
  else
  {
    first=mid+1;
  }
}
 if (pos==-1)
{
  cout<<"element not found";
}
  getch();
  return 0;
}

