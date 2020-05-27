#include<bits/stdc++.h>
using namespace std;
int a[2002];
int binarysearch(int p,int q, int x)
{
	while(q-p>1)
	{
		int b=(p+q)/2;
		if(a[b]>x)
			q=b;
		else
			p=b;
	}
	if(a[p]>x)
		return p;
	return q;
}
int main()
{
	int i,j,n,b,c,d,e;
	unsigned long long ans;
cin>>n;
	while(n!=0)
	{
		ans=0;
		for(i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		for(i=1;i<n-1;i++)
			for(j=i+1;j<n;j++)
			{
				if(a[i]+a[j]<a[n])
				{
					b=binarysearch(i,n,a[j]+a[i]);
					ans=ans+n-b+1;
				}
			}
cout<<ans<<"\n";
cin>>n;
	}
	return 0;
}
