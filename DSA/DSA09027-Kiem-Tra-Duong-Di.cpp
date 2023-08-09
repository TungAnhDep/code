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
int visited[1001];
vector <int> adj[1001];
int parent[1001];
void dfs(int u){
	visited[u]=1;
	for (int v:adj[u]){
		if (!visited[v]){
			parent[v]=u;
			dfs(v);
			
		}
	}
}
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    	int n,m; cin >> n >> m;
    	memset(adj,0,sizeof(adj));
    	for (int i=1;i<=m;i++){
    		int u,v; cin >> u >> v;
    		
    		adj[u].push_back(v);
    		adj[v].push_back(u);
		}
		int q; cin >> q;
		while (q--){
			int x,y; cin >> x >> y;
			memset(visited,0,sizeof(visited));
    	    memset(parent,0,sizeof(parent));
    	   
			dfs(x);
			if (parent[y]==0) cout <<"NO";
			else cout <<"YES";
			cout << endl;
		}
	}
}
