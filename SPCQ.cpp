#include <iostream>
#define ll long long
using namespace std;


int main()
{
	ll t,n,sum,m;
	cin>>t;
	while(t--)
    {

        cin>>n;
        m=n;
        while(1)
        {m=n;
        sum=0;
        while(m!=0)
              {
                  sum=sum+m%10;
                    m=m/10;
              }
        if(n%sum==0)
        {

            cout<<n<<"\n";
            break;
        }
        else
            n++;


        }
    }
return 0;
}
