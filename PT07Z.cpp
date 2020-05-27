#include <bits/stdc++.h>
using namespace std;

bool visited[10001];
int ans;
int DFS(vector<int> graph[],int start)
{
   int lgst = 0,lgst2 = 0;
   int temp = INT_MIN;
   
   visited[start] = 1;
   for(int i=0; i<graph[start].size() ;++i)
   {
      if(!visited[graph[start][i]])
      {
         temp = DFS(graph,graph[start][i]);
         /*temp is used to compare the 
         presnt length with previous
         two longest values*/
         
         if(temp >= lgst)
         {
            /*Greater than the 
            maximum*/
            lgst2 = lgst;
            lgst = temp;
         }
         /*greater than 2nd largest*/
         else if(temp > lgst2)
            lgst2 = temp;
      }   
   }
   ans = max(ans , lgst+lgst2);
   return lgst+1;
}
int main() {
   
   int n,u,v;
   cin>>n;
   
   vector<int> graph[n+1];
   
   for(int i=0;i<n-1 ;++i)   
   {
      cin>>u>>v;
      graph[u].push_back(v);
      graph[v].push_back(u);
   }
   DFS(graph,1);
   
   cout<<ans<<"\n";
   
   return 0;
}
