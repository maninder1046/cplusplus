# include <iostream>
# include <bits/stdc++.h>

using namespace std;

int series(int n)
{
	if(n==0)
		return 1;
	else
	{
		cout<<" "<<(pow(n,n)+n)<<" ";
		return (series(n-1));
	}
}

int main()
{
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	series(n);
	return 0;
}
