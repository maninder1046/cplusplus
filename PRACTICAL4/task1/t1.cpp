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
int main()
{
	cout<<first::add(12,15)<<"\n";
	cout<<second::add(12.6,15.9)<<"\n";
	return 0;
}
