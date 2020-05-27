#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int li;
 
long long int dp[100005];
 
int main(){
    li t;
    scanf("%lld", &t);
    while(t--){
        li n;
        scanf("%lld", &n);
        li val[n];
        for(li i=0;i<n;++i){
            scanf("%lld",val + i);
        }
        memset(dp,0,sizeof dp);
        dp[n-1] = val[n-1];
        dp[n-2] = dp[n-1] + val[n-2];
        dp[n-3] = dp[n-2] + val[n-3];
        for(int i=n-4;i>=0;--i){
            dp[i] = max(
                        val[i] + dp[i+2],max(
                        val[i]+val[i+1]+dp[i+4],
                        val[i]+val[i+1]+val[i+2]+dp[i+6]
                        ));
        }
        printf("%lld\n", dp[0]);
    }
    return 0;
}
