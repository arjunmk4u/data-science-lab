#include<iostream>
using namespace std;
class space
{
    int x,y,z;
    public:
        void getdata(int a, int b, int c);
        void display();
        space operator -();

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
space space::operator -()
{
    space p;
    p.x=-x;
    p.y=-y;
    p.z=-z;
    return p;
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    space s1,s2;
    s1.getdata(a,b,c);
    cout<<"s1";
    s1.display();
    s2= -s1;
    cout<<"s2";
    s2.display();
    return 0;
}