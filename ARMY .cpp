#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g,m;
		cin>>g>>m;
		int i;
		int a[g];
		int b[m];
		for(i=0; i<g; i++)
		{
			cin>>a[i];
		}
		for(i=0; i<m; i++)
		{
			cin>>b[i];
		}
		int p=a[0];
		int q=b[0];
		for(i=1; i<g; i++)
		{
			if(p<a[i])
			{
				p=a[i];
			}
		}
		for(i=1; i<m; i++)
		{
			if(q<b[i])
			{
				q=b[i];
			}
		}
		if(p>=q)
		{
			cout<<"Godzilla"<<"\n";
		}
		else
		if(p<q)
		{
			cout<<"MechaGodzilla"<<"\n";
		}
		else
		cout<<"uncertain"<<"\n";
	}
	return 0;
}
