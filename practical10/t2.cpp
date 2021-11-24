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
		void display()
		{
			cout<<"Details of "<<name<<" are:\n";
	        cout<<"Roll no. :-"<<rno<<"\n";
	        cout<<"Phone no. :-"<<phn<<"\n";
			cout<<"Address :-"<<adrs<<"\n";
		}
};

int main()
{
	Student *s=new Student;
	s->rno=12;
	s->phn=9411354282;
	s->adrs="Dehradun Uttrakhand";
	s->name="Sam";
	s->display();
	return 0;
}
