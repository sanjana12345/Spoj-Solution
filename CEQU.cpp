#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    long long int t,a,b,c,m,i=1;
    cin>>t;
    while(t--)
    {
cin>>a>>b>>c;
m=(__gcd(a,b));
 
if(c%m==0)
 	cout<<"Case "<<i<<": Yes"<<endl;
		else
			cout<<"Case "<<i<<": No"<<endl;
 
        i++;
    }
    return 0;
}
 

