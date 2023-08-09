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
    int n; cin >> n;
    int a[n+1][n+1];
    vector <int> adj[1001];
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++){
    		cin >> a[i][j];
    		
		}
	}
	for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++){
    		if (a[i][j]!=0 && a[j][i]!=0 )
    			{
    				adj[i].push_back(j);
				}
    			
		}
	}
	for (int i=1;i<=n;i++){
		for (int x:adj[i]) cout << x <<" ";
		cout << endl;
	}
}

