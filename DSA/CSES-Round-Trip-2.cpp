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
int color[100005], parent[100005];
vi adj[100005];
int st,en;
bool dfs(int u){
	color[u]=1;
	for (int x:adj[u]){
		if (color[x]==0) {
			
				parent[x]=u;
				if (dfs(x))return true;
			
		}
		else if (color[x]==1) {
			st=x; en=u;
			return true;
		}
	}
	color[u]=2;
	return false;
	
}
int main(){
	faster();
	int n,m; cin >> n >> m;
	rs(color,0);
	rs(adj,0);
	rs(parent,0);
	FOR(i,1,m){
		int u,v; cin >> u >> v;
		adj[u].pb(v);
	}
	FOR(i,1,n){
		if (color[i]==0){
			if (dfs(i)){
				vi cycle;
				cycle.pb(st);
				while (en!=st){
					cycle.pb(en);
					en=parent[en];
				}
				cycle.pb(st);
				reverse(all(cycle));
				cout << cycle.sz << endl;
				for (int x:cycle){
					cout << x <<" ";
				}
				return 0;
			}
			
		}
	
	}
	cout << "IMPOSSIBLE\n";	
}
