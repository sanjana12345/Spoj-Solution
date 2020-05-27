#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=1;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        long long int a[n],dp[n],max=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            dp[i]=0;
        }
        dp[0]=a[0];
        dp[1]=a[1];
        for(i=2; i<n; i++)
        {
        for(j=0; j<i-1; j++)
        {
            if(dp[i]<dp[j]+a[i])
                dp[i]=dp[j]+a[i];
        }
        }
        for(i=0;i<n; i++)
        {
            if(max<dp[i])
                max=dp[i];
        }
        cout<<"Case "<<s++<<": "<<max<<endl;
    }
    return 0;
}
