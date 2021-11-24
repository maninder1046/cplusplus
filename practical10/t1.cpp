#include <iostream>
#include <string>

using namespace std;

class Directory
{
	public:
		string name;
		string address;
		long int telephn;
		long int mobilephn;
		string head;
};


int main()
{
	cout<<"\nEnter the objects to created: \n";
	int n,i,sum=0;
	cin>>n;
	Directory d[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter details of "<<i+1<<" person\n";
		cout<<"Enter name :\n";
	    cin>>d[i].name;
	    cout<<"Enter address :\n";
	    cin>>d[i].address;
	    cout<<"Enter tele-phone no. :\n";
	    cin>>d[i].telephn;
	    cout<<"Enter mobile no. :\n";
	    cin>>d[i].mobilephn;
	    cout<<"Enter name of the Head of the Family :\n";
	    cin>>d[i].head;
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nDetails of "<<i+1<<" person\n";
		cout<<"Name :"<<d[i].name<<'\n';
		cout<<"Address :"<<d[i].address<<'\n';
		cout<<"Tele-phone no. :"<<d[i].telephn<<'\n';
		cout<<"Mobile no. :"<<d[i].mobilephn<<'\n';
		cout<<"Head of the family :"<<d[i].head<<'\n';
	}
	return 0;
}
