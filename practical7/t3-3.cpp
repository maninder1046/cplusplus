# include <iostream>

using namespace std;

int main()
{
	int n,i,j;
	cout<<"Enter size of the array:-\n";
	cin>>n;
	int a[n][n],b[n][n];
	cout<<"Enter the elements of the array\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Reversed Array is :-\n";
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			b[n-i-1][n-j-1]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
