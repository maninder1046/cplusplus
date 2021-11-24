
#include <iostream>
using namespace std;

namespace first
{
	int add(int a,int b)
	{
		return a+b;
	}
}
namespace second
{
	float add(float a,float b)
	{
		return a+b;
	}
}
using namespace second;

int main()
{
	cout<<add(12,15)<<"\n";
	cout<<add(12.5,15)<<"\n";
	cout<<add(12,15.7)<<"\n";
	cout<<add(12.9,15.3)<<"\n";
	cout<<add(12.0,15.0)<<"\n";
	return 0;
}
