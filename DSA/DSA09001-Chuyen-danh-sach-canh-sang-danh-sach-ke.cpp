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

int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    	int m,n; cin >> n >> m;
    	
    	vector<int> adj[1001];
    	for (int i=0;i<m;i++){
    		int u,v; cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
		}
		for (int i=1;i<=n;i++){
			cout << i<<": ";
			for (int x:adj[i]) cout << x <<" ";
			cout << endl;
		}
	}
}

