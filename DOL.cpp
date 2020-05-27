#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,i,flag;
	cin>>t;
	long long int j=1;
	while(t--)
	{
	flag=0;
		long long int n;
		cin>>n;
		while(n%2==0)
        {
         n>>=1;

        }
cout<<"Case "<<j<<": "<<n<<"\n";
j=j+1;


	}

	return 0;
}
