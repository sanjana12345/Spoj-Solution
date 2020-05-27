#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,s;
	cin>>t;
	while(t--)
	{
		s=0;
		int x;
		cin>>x;
		if(x%2!=0){
		
		cout<<x<<"\n";
		continue;
	}
		while(x!=0)
		{
			s=s << 1;
			s=s+(x&1);
			 x=x >> 1;
		}
		cout<<s<<"\n";
	}
	return 0;
}
