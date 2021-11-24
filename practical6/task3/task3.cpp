
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void reverse(string s)
{
	string temp1;
	int l=0,i;
	l=s.length();
	for(i=l-1;i>=0;i--)
	{
		temp1=temp1+s[i];
	}
	cout<<"Reversed String using manual function:- "<<temp1<<"\n";
}

int main()
{
	string s;
	cout<<"Enter a string\n";
	getline(cin,s);
	reverse(s);
	reverse(s.begin(),s.end());
	cout<<"Reversed String using inbuilt function:- "<<s<<"\n";
	return 0;
	
}
