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
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    
    	memset(visited,0,sizeof(visited));
    	memset(adj,0,sizeof(adj));
    	int n,m,x; cin >> n >> m >> x;
    	for (int i=1;i<=m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
    		
		}
		queue<int> q;
		visited[x]=1;
		q.push(x);
		while (!q.empty()){
			int front = q.front(); q.pop();
			cout << front <<" ";
			for (int v:adj[front]){
				if (!visited[v]){
					q.push(v);
					visited[v]=1;
				}
			}
			}
		cout << endl;	
		}
		
	}


