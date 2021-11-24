#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int a,b;
	cout<<"Enter the values of a & b\n";
	cin>>a;
	cin>>b;
	cout<<"Value of a & b before calling swap function\n";
	cout<<a<<'\n';
	cout<<b<<'\n';
	swap(&a,&b);
	cout<<"Value of a & b after calling swap function\n";
	cout<<a<<'\n';
	cout<<b<<'\n';
	return 0;
}
