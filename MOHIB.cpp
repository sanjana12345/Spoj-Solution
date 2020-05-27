#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);  
    while(t--)
    {
         int x,avg,n;
         cin>>x>>avg;
         n = avg - x;
         int sum = n * (avg + 1);
         sum = sum - (n*(n-1)/2) ;

         cout<<sum<<"\n";
    }
return 0;
}
