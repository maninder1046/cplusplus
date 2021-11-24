#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int compare(string s1, string s2)
{
	int l1=s1.length();
	int l2=s2.length();
	if(l1==l2)
	{
		for(int i=0;i<l1;i++)
		{
			if(s1[i]!=s2[i])
				return 0;
		}
		return 1;
	}
	else
		return 0;
}
int main()
{
	string s1,s2;
	cout<<"Enter any two strings:- \n";
	getline(cin,s1);
	getline(cin,s2);
	int c=compare(s1,s2);
	if(c==0)
		cout<<"Strings are not equal\n";
	else
		cout<<"Strings are equals\n";
	return 0;
} 
