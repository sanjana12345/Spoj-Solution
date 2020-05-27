#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,flag;
	cin>>t;
	while(t--)
	{	long long int s=0;

	flag=0;
	long long int n;
		cin>>n;
		int a[n];
		for(i=0; i<n; i++){
		cin>>a[i];}
		for(i=n-1; i>=0; i--)
        {
            s= s+ (i*a[i]) - a[i]*(n-1-i);

        }
        cout<<s<<"\n";
}


	return 0;
}
