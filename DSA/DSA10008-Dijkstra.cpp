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
int n,m,visited[1001],s;
vector<pair<int,int>> adj[1001];
void inp(){
	cin >> n >> m >> s;
	FOR(i,1,m){
		int x,y,w; cin >> x >> y >> w;
		adj[x].pb({y,w});
		adj[y].pb({x,w});
	}
}
void dijkstra(int s){
	// vector luu khoang cach
	vector<ll> d(n+1,10e9);
	d[s]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	//{trong so, dinh}
	q.push({0,s});
	while (!q.empty()){
		pair<int,int> top=q.top(); q.pop();
		int u=top.second,kc=top.first;
		if (visited[u]) continue;
		visited[u]=1;
		for (auto it:adj[u]){
			int v=it.first, w=it.second;
			d[v]=min(d[v],d[u]+w);
			q.push({d[v],v});
		}
	}
	FOR(i,1,n) cout << d[i] <<" ";
}
int main(){
	faster();
	tester(){
		rs(adj,0);
		rs(visited,0);
		inp();
		dijkstra(s);
		cout << endl;
	}
}