#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,cnt;
		cin>>n;
				cnt = 3 * ((n * (n + 1))/2) - n;
						cnt = cnt % 1000007;

	cout<<cnt<<"\n";
	}
	return 0;
}
