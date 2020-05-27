#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
bool visited[100005];
vector<vector<int> > adj(100005);
int n;
void dfs(int i){
	if(visited[i])
	  return;
	visited[i]=1;
	for(vector<int>::iterator it=adj[i].begin();it!=adj[i].end();it++){
		if(!visited[*it])
		dfs(*it);
	}
}
int main(){
	
	int t;
	scanf("%d",&t);
	while(t--){
		int e,ans=0,x,y;
		scanf("%d %d",&n,&e);
		memset(visited,0,sizeof visited);
		for(int i=0;i<n;i++)
		   adj[i].clear();
		for(int i=0;i<e;i++){
			scanf("%d %d",&x,&y);
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for(int i=0;i<n;i++){
			if(!visited[i]){
			  ans++;
			  dfs(i);
		  }
	  }
	  printf("\n%d",ans);
  }
}

