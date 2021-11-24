;
	cout<<"Enter size of the array:-\n";
	cin>>n;
	char a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-i-1);j++)
			a[i][j]=' ';
		for(j=n-1;j>=(n-i-1);j--)
			a[i][j]='*';
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
