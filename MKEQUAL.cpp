#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,s=0;
		cin>>n;
		int a[n];
		for(i=0; i<n; i++)
		cin>>a[i];
	for(i=0; i<n; i++)
	{
	s+=a[i];}
	if(s%n==0)
	cout<<n<<"\n";
	else
	cout<<n-1<<"\n";
	}
	return 0;
}
