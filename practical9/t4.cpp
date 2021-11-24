#include <iostream>
#include <string>

using namespace std;

class student
{
	public:
		string name;
		int age;
		int marks;
		friend int add(student s1,student s2,student s3);
};

int add(student s1,student s2,student s3)
{
	int sum=0;
	sum=sum+s1.marks+s2.marks+s3.marks;
	cout<<"Total marks of students in college = "<<sum<<"\n";
	return 0;
}

int main()
{
	student s1,s2,s3;
	s1.name="Sammei";
	s1.age=20;
	s1.marks=93;
	s2.name="Rama";
	s2.age=20;
	s2.marks=88;
	s3.name="Masky";
	s3.age=20;
	s3.marks=85;
	int i,sum=0;
	sum=add(s1,s2,s3);
	return 0;
}
