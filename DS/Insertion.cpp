#include<iostream>
using namespace std;
int main()
{
    int i,n,e,a[20],loc;
    cout<<"Enter limit";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to insert";
    cin>>e;
    cout<<"Enter the position you want to insert";
    cin>>loc;
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
    }
    a[loc]=e;
    n=n+1;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}