#include<bits/stdc++.h>
#define inf 1000000000
#define MAXN 100000

using namespace std;

int main()
{
    int g, b;
cin>>b>>b;    
    while(g != -1) {
        int G, B;
        G = max(g,b);
        B = min(g,b);
        
        int sol = G / (B+1) + (G % (B+1) > 0);
        cout<< sol<<"\n";
        
    cin>>g>>b;
    }
    
    
    return 0;
}
