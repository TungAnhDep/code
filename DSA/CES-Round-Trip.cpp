#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vll vector<ll>
#define tester() int t; cin >> t; while(t--)
#define MAX 1000000
#define rs(M,x) memset(M,x,sizeof(M))
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define FX(x,a) for (int x:a)
#define FXD(x,a) for (int &x:a)
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
int visited[100001];
vi adj[100001];
int st,en;
int parent[100001];
vi cycle;
bool dfs(int u){
	visited[u]=1;
	FX(v,adj[u]){
		if (!visited[v]){
			parent[v]=u;
			if (dfs(v)) return true;
		}
		else if (v!=parent[u]){
			st=v, en=u;
			return true;
		}
	}
	return false;
}
int main(){
	int n,m; cin >> n >> m;
	rs(adj,0);
	rs(visited,0);
	rs(parent,0);
	FOR(i,1,m){
		int u,v; cin >> u >> v;
		
		adj[u].pb(v);
		adj[v].pb(u);
		
	}
	int cnt=0;
	FOR(i,1,n){
		if (!visited[i]){
			if (dfs(i)){
				cnt++;
				
				cycle.pb(st);
				while (en!=st){
					cycle.pb(en);
					en=parent[en];
				}
				cycle.pb(st);
				reverse(all(cycle));
				if (cnt){
					cout << cycle.sz << endl;
					FX(x,cycle) cout << x <<" ";
					return 0;
				}
			}
		}
	}
	cout << "IMPOSSIBLE";
}
