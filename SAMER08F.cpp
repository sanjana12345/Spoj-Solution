#include <iostream>
#include<algorithm>
#include <math.h>


using namespace std;
int main()
{        int n;
        cin>>n;
while(n)
{

    if(n==0)
    {
    break;
    }
    else
    {

        int m=(n*(n+1)*(2*n+1))/6;
        cout<<m<<"\n";
        cin>>n;
    }
}


return 0;
}
