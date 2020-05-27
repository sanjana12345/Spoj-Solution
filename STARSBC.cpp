#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
	long long find( ll n ) { 
	long long result = n ; 
for ( ll i = 2 ; i * i <= n ; ++ i )
 if ( n % i == 0 ) 
{ while ( n % i == 0 ) n /= i ; 
result -= result / i ; 
}
 if ( n > 1 )
 result -= result / n ; 
return result ;
}
 
int main() {
	long long n;
	while(scanf("%lld",&n)!=EOF){
		printf("%lld\n",find(n)/2); 
	}
	return 0;
} 
