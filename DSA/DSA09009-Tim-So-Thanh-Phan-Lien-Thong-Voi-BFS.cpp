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
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=1;
	while (!q.empty()){
		int front = q.front(); q.pop();
		for (int x:adj[front]){
			if (!visited[x]){
				visited[x]=1;
				q.push(x);
			}
		}
	}
}
int ConnectedComponent(int n){
	int cnt = 0;
	for (int i=1;i<=n;i++){
		if (!visited[i]){
			cnt++;
			bfs(i);
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
    	memset(adj,0,sizeof(adj));
    	memset(visited,0,sizeof(visited));
    	int n,m; cin >> n >> m;
    	for (int i=1;i<=m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
		}
		cout << ConnectedComponent(n) << endl;
	}
}

