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
#define FI(x,a) for (int x:a)
#define FID(x,a) for (int &x:a)
#define FL(x,a) for (long long x:a)
#define FLD(x,a) for (long long &x:a)
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
int parent[1001], visited[1001];
vi adj[1000];
void bfs(int u){
	queue <int> q;
	q.push(u);
	visited[u]=1;
	while (!q.empty()){
		int v=q.front(); q.pop();
		FX(x,adj[v]){
			if (!visited[x]){
				parent[x]=v;
				q.push(x);
				visited[x]=1;
			}
		}
	}
}
void path(int s, int u){
	vi cycle;
	while (u!=s){
		cycle.pb(u);
		u=parent[u];
	}
	cycle.pb(s);
	reverse(cycle.begin(), cycle.end());
	FX(x,cycle) cout << x <<" ";
}
int main(){
	faster();
	tester(){
		int n,m,x , y; cin >> n >> m >> x >> y;
		rs(adj,0);
		rs(parent,0);
		rs(visited,0);
		FOR(i,1,m){
			int u,v; cin >> u >> v;
			adj[u].pb(v);
		}
		bfs(x);
		if (!visited[y]) cout <<-1;
		else path(x,y);
		cout << endl;
	}
}
