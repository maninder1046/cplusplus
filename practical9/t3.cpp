#include <iostream>

using namespace std;

class item
{
	static int count;
	int number;
	public:
		void getdata(int a)
		{
			number=a;
			count++;
		}
		
		void getcount(void)
		{
			cout<<"Count :"<<count<<"\n";
		}
};

int item::count;

int main()
{
	item a,b,c;
	cout<<'\n'<<"Before reading data"<<'\n';
	a.getcount();
	b.getcount();
	c.getcount();
	
	cout<<'\n'<<"After while data"<<'\n';
	a.getdata(123);
	a.getcount();
	b.getdata(456);
	b.getcount();
	c.getdata(789);
	c.getcount();
	
	cout<<'\n'<<"After reading data"<<'\n';
	
	a.getcount();
	b.getcount();
	c.getcount();
	return 0;
}
