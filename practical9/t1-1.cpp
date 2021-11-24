#include <iostream>
#include <string>

using namespace std;

class Student
{
	public:
		int rno;
		long int phn;
		string adrs;
		string name;
};

int main()
{
	Student obj1;
	Student obj2;
	obj1.rno=12;
	obj1.phn=9411354282;
	obj1.adrs="Dehradun Uttrakhand";
	obj1.name="Sam";
	obj2.rno=13;
	obj2.phn=9411567855;
	obj2.adrs="Lucknow Uttarpardesh";
	obj2.name="John";
	cout<<"Details of "<<obj1.name<<" are:\n";
	cout<<"Roll no. :-"<<obj1.rno<<"\n";
	cout<<"Phone no. :-"<<obj1.phn<<"\n";
	cout<<"Address :-"<<obj1.adrs<<"\n";
	cout<<"Details of "<<obj2.name<<" are:\n";
	cout<<"Roll no. :-"<<obj2.rno<<"\n";
	cout<<"Phone no. :-"<<obj2.phn<<"\n";
	cout<<"Address :-"<<obj2.adrs<<"\n";
	return 0;
}
