#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
{
    int x,y;
    cin>>x>>y;
    if(x==y)
    {
        if(x%2==0)
        {
            cout<<2*x<<"\n";
        }
        else cout<<(2*x-1)<<"\n";
    }
    else if(x==y+2)
    {

        if(x%2==0)
        {

            cout<<x+y<<"\n";
        }
        else cout<<(x+y-1)<<"\n";
    }
    else cout<<"No Number\n";
}    return 0;
}
