#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,r=0,p=0,sum=0,s=0;
		cin>>n>>m;
		while(n!=0)
		{
			r=r*10;
			r=r+n%10;
			n=n/10;
		}
			while(m!=0)
		{
			p=p*10;
			p=p+m%10;
			m=m/10;
		}
		
		sum+=r+p;
			while(sum!=0)
		{
			s=s*10;
			s=s+sum%10;
			sum=sum/10;
		}
	
		cout<<s;
		cout<<"\n";
		
	}
	
	return 0;
}
