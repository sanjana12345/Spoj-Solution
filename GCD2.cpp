#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int gcd(int a, int b){
if(b==0) return a;
else return gcd(b,a%b);
}

int main(){
int t;
cin>>t;
while(t--){
int a,i,num;
char b[1001];
cin>>a>>b;
if(a==0){
cout<<b<<"\n";
continue;
}
int len=strlen(b);
for(i=0,num=0;i<len;i++){
num=(num*10+(b[i]-'0'))%a;

}

cout<<gcd(a,num);
cout<<endl;

}
return 0;
}
