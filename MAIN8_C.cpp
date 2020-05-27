#include<bits/stdc++.h>
using namespace std;
long long int t,n,k,i,p,j,a[500003];
 
int func(int x)
{p=k;
	for(i=n-1; i>=0; i--)
	{
		if(x == 0) {
			return 1;
		}
		p-=(a[i]/x);
		if(p<1)
	    return 1;
	}
	return 0;
}
int bs()
{
	long long int start=0;
    long long int end=a[n-1]+1;
	long long int mid;
	while(start<end)
	{
		mid=(start+end)/2;
		if(func(mid))
		{
			start=mid+1;
		}
 
 
		else
	         end=mid;
		}
		return start-1;
}
int main()
{
    cin>>t;
   while(t--)
{
cin>>n>>k;
for(i=0; i<n; i++)
{
cin>>a[i];
}
sort(a,a+n);
cout<<bs()<<"\n";
}
	return 0;
}
 
