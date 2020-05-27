#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
	int a,b;
	cin>>a>>b;
	int m=floor((abs(a-b))/__gcd(abs(a),abs(b)));
cout<<m<<"\n";
}

	return 0;
}
