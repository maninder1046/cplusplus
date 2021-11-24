#include <iostream>
#include <string>

using namespace std;

class student
{
	public:
		string name;
		int age;
		int year;
		char sec;
		int marks;
};


int main()
{
	student s[4];
	int i,sum=0;
	for(i=0;i<4;i++)
	{
		cout<<"Enter details of student "<<i+1<<"\n";
		cout<<"Enter name\n";
	    cin>>s[i].name;
	    cout<<"Enter age\n";
	    cin>>s[i].age;
	    cout<<"Enter year\n";
	    cin>>s[i].year;
	    cout<<"Enter section\n";
	    cin>>s[i].sec;
	    cout<<"Enter marks\n";
	    cin>>s[i].marks;
		sum=sum+s[i].marks;
	}
	cout<<"Total marks of students in college = "<<sum<<"\n";
	return 0;
}
