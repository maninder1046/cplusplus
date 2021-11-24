#include <iostream>
#include <string>

using namespace std;

class College
{
	public:
		string name;
		string address;
		long int phn;
};

typedef struct student
{
	string name;
	int age;
	long int phn;
}student;

int main()
{
	College obj;
	obj.name="Graphic Era Hill University";
	obj.address="Dehradun Uttrakhand";
	obj.phn=9445245637;
	
	student s1;
	s1.name="Vaibhav Kumar";
	s1.age=20;
	s1.phn=9411354282;
	
	cout<<"\nCollege Details :\n";
	cout<<obj.name<<'\n';
	cout<<obj.address<<'\n';
	cout<<obj.phn<<'\n';
	
	cout<<"\nStudent Details :\n";
	cout<<s1.name<<'\n';
	cout<<s1.age<<'\n';
	cout<<s1.phn<<'\n';
	return 0;
}
