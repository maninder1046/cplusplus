#include <iostream>

using namespace std;

class Abc
{
	public:
		int a;
		int b;
		Abc(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void compute()
		{
			float r;
			r=a%b;
			cout<<"Remainder of "<<a<<' '<<b<<" = "<<r<<'\n';
		}
};
int main()
{
	int a,b;
	cout<<"Enter any two numbers :\n";
	cin>>a;
	cin>>b;
	Abc obj(a,b);
	obj.compute();
	return 0;
}
© 2021 GitHub, Inc.
Terms
