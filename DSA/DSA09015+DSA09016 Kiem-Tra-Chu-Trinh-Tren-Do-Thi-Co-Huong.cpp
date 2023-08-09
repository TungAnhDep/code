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
int parent[1001],color[1001];
vector<int> adj[1001];
bool dfs(int u){
	color[u]=1; // Mau xam, dang tham
	for (int v:adj[u]) {
	// Duyet cac dinh ke voi dinh u
		if (color[v]==0) // Dinh v chua duoc tham
	{
			parent[v]=u;
			if (dfs(v)) return true;
	}
		else if (color[v]==1) return true; // Neu nhu dinh ke voi dinh u da duoc tham => ton tai canh nguoc
}
	color[u]=2; // Da duyet xong dinh u, mau den
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
    	memset(color,0,sizeof(color));
    	memset(parent,0,sizeof(parent));
    	for (int i=0;i<m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
		}
	int cnt=0;
	for (int i=1;i<=n;i++){
		if (color[i]==0){
			if (dfs(i)) cnt++;
		}
	}
	if (!cnt) cout << "NO";
	else cout <<"YES";
	cout << endl;
	}
}

