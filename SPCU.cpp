#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s=0;
		int i;
		int a[n];
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<n; i++)
		{
			if(a[i]>i)
			{
				s=1;
			}
		}
		if(s==1)
		{
			cout<<"NO"<<"\n";
		}else
		cout<<"YES"<<"\n";
	}
	return 0;
}
