#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	char c;
	int i;
	cout<<"Enter a String:-\n";
	getline(cin,s);
	cout<<"Enter a charater to replace in string:- \n";
	cin>>c;
	cout<<"Enter the index to repalce in String:-\n";
	cin>>i;
	cout<<"Address of String before change:- "<<&s<<"\n";
	s[i]=c;
	cout<<"String after change:- "<<s<<"\n";
	cout<<"Address of String After change:- "<<&s<<"\n";
	return 0;
}
