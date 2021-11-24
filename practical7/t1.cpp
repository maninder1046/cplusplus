
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int yr,ch;
	string month="october";
	int date=16; 
	yr=2021;
	cout<<"1. Year\n";
	cout<<"2. Month\n";
	cout<<"3. Date\n";
	cout<<"Enter your choice : ";
	cin>>ch;

switch(ch)
{

case 1:
	cout<<" "<<yr<<"\n";
	break;
case 2:
	cout<<" "<<month<<"\n";
	break;
case 3:
	cout<<" "<<date<<"\n";
	break;
default:
	cout<<"Invalid choice\n";
	break;
}
return 0;
}
