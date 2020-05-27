#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n,i,s;
		cin>>n;
		int a[n+1];
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		s=n;
		for(i=n-1; i>=0; i--)
		{
			if(a[i]==s)
			{
				s--;
			}
 
		}
		cout<<s<<"\n";
 
	return 0;
}
 
