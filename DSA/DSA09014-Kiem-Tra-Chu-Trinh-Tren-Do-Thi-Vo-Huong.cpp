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
bool dfs(int u, int par){
	visited[u]=1;
	for (int v:adj[u]){
		if (!visited[v]){
			if (dfs(v,u)) return true;
		}
		else if (v!=par) return true;
	}
	return false;
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
    	memset(visited,0,sizeof(visited));
    	for (int i=0;i<m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
		}
		int cnt=0;
		for (int i=1;i<=n;i++){
			if (!visited[i]){
				if (dfs(i,0)) {
					cnt++;
					
				}
			}
		}
		if (cnt) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}

