#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public:
        void getdata(int a, int b, int c);
        void display();
        friend void operator -(space&s);

};
void space::getdata(int a, int b, int c)
{
    x=a;y=b;z=c;
}
void space::display()
{
    cout<<"x="<<x<<" ";
    cout<<"y="<<y<<" ";
    cout<<"z="<<z<<" ";
}
void operator -(space&s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}
int main()
{
    space p;
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    space s1,s2;
    p.getdata(a,b,c);
    cout<<"s1";
    p.display();
    -p;
    cout<<"-s";
    p.display();
    return 0;
}