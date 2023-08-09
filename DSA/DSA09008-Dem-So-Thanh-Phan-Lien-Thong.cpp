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
vector <int> adj[1001];
int visited[1001];
void dfs(int u){
	visited[u]=1;
	for (int v:adj[u]){
		if (!visited[v]) dfs(v);
	}
}
int ConnectedComponent(int n){
	int cnt=0;
	for (int i=1;i<=n;i++){
		if (!visited[i]){
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    	int n,m; cin >> n >> m;
    	for (int i=1;i<=m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
		}
		cout << ConnectedComponent(n) << endl;
	}
}

