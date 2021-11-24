# include <iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter size of the array:-\n";
	cin>>n;
	char a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			a[i][j]='*';
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
