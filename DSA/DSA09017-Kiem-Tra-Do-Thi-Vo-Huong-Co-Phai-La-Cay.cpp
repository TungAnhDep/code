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
int n, visited[1001],parent[1001];
vi adj[1001];
void inp(){
	cin >> n;
	rs(visited,0); 
	rs(adj,0);
	FOR(i,1,n-1){
		int x,y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}
bool dfs(int u, int par){
	if (visited[u]) return false;
	visited[u]=1;
	for (int v:adj[u]){
		if (v!=par){
			bool result = dfs(v,u);
			if (!result) return false;
		}
	}
	return true;
}
bool check(){
	if (!dfs(1,0)) return false;
	FOR(i,1,n){
		if (!visited[i]) return false;
	}
	return true;
	
}
int main(){
	faster();
	tester(){
		inp();
		if (check()) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}
