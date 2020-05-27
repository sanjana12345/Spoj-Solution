#include<bits/stdc++.h>
using namespace std;
int main()
{
double t,i,flag;
	cin>>t;
	while(t--)
    {
        double  a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
double s=(a+b+c+d)*1.0/2;
double ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
cout<<setprecision(2)<<fixed<<ans<<"\n";
 }
	return 0;
}
