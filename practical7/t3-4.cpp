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
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=10-a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
