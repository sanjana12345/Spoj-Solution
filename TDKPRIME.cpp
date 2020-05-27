#include<bits/stdc++.h>
using namespace std;
#define lim 86029000
vector<bool> b((lim>>1)+100);
int p[5000100];
void prime()
{
 for(int i=3;i<=9257;i+=2)
 {
  if(b[(i-3)>>1]==0)
  {
   for(int j=i*i;j<lim;j+=2*i)
   {
     b[(j-3)>>1]=1;
   }
  }
 }
  p[0]=2;
  int count=1;
  for(int i=0;2*i<lim;i++)
   if(!b[i])
    p[count++]=2*i+3;
}
int main()
{
      prime();
        int t,q;
  cin>>t;
  while(t--)
  {
   cin>>q;
   cout<<p[q-1]<<"\n";
  }
 return 0;
}
