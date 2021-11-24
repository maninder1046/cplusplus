# include <iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter size of the array:-\n";
	cin>>n;
	char a[n][n];
	for(i=n-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			a[i][j]='*';
		}
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
© 2021 GitHub, Inc.
Terms
