#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n!=0)
    {
        long int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        long long int work=0;
        for(i=1;i<n;i++)
        {
            a[i]+=a[i-1];
            work+=fabs(a[i-1]);
        }
        cout<<work<<"\n";
        cin>>n;
    }
    return 0;
}
