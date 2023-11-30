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
cout<<"rollnumber: