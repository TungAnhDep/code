#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
const ll mod = 10e7+9;
using namespace std;
int visited[1001], parent[1001];
vector<int> adj[1001];

void dfs(int u){
	visited[u]=1;
	for (int v:adj[u]){
		if (!visited[v]){
			parent[v]=u;
			dfs(v);
		}
	}
}
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=1;
	while (!q.empty()){
		int v = q.front(); q.pop();
		for (int x:adj[v]){
			if (!visited[x]){
				parent[x]=v;
				q.push(x);
				visited[x]=1;
			}
		}
	}
}
void path(int s, int t){
	vector <int> path;
	if (!visited[t]) cout <<-1;
	else
	{
	while (t!=s){
		path.push_back(t);
		t=parent[t]; // Gan t = cha cua t
	}
	path.push_back(s);
	reverse(path.begin(),path.end());
	for (int x:path) cout << x <<" ";
}	
}
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    	int n,m,s,t; cin >> n >> m >> s >> t;
    	memset(adj,0,sizeof(adj));
    	memset(parent,0,sizeof(parent));
    	memset(visited,0,sizeof(visited));
    	for (int i=1;i<=m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
		}
		bfs(s);
		path(s,t);
		cout << endl;
	}
}

