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
vector <int> adj[1001],r_adj[1001];
stack<int> st;
int n,m,cnt;
// Lien thong manh: Co 1 thanh phan lien thong(Do thi co huong)
// Do thi lien thong: Co 1 thanh phan lien thong (Do thi vo huong)
void dfs1(int u){
	visited[u]=1;
	for (int x:adj[u]){
		if (!visited[x]) dfs1(x);
	}
	st.push(u);
}
void dfs2(int u){
	visited[u]=1;
	// cout << u <<" "; 
	for (int x:r_adj[u]){
		if (!visited[x]) dfs2(x);
	}
}

	

int main(){
	int t; cin >> t;
	while (t--){
	
	 cin >> n >> m;
	memset(adj,0,sizeof(adj));
	memset(r_adj,0,sizeof(r_adj));
	for (int i=1;i<=m;i++){
		int u,v; cin >> u >> v;
		adj[u].push_back(v);
		r_adj[v].push_back(u);
	}
	memset(visited,0,sizeof(visited));
	for (int i=1;i<=n;i++){
		if (!visited[i]) dfs1(i);
	}
	// cout << endl;
	memset(visited,0,sizeof(visited));
	cnt=0;
	while (!st.empty()){
		
		int v=st.top(); st.pop();
		if (!visited[v]){
			dfs2(v);
			cnt++;
			 
			// cout << endl;
			
		}
	}
	if (cnt==1) cout <<"YES\n";
	else cout << "NO\n";
}
}
