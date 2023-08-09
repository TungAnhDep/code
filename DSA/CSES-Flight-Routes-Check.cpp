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
 
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
vi adj[100001], r_adj[100001];
int visited[100001];
int n,m,cnt;
stack<int> st;
void dfs1(int u){
	visited[u]=1;
	for (int x:adj[u]){
		if (!visited[x]) dfs1(x);
	}
	st.push(u);
}
void dfs2(int u){
	visited[u]=1;
	for (int x:r_adj[u]){
		if (!visited[x]) dfs2(x);
	}
}
int main(){
	cin >> n >> m;
	rs(adj,0);
	rs(r_adj,0);
	rs(visited,0);
	FOR(i,1,m){
		int u,v; cin >> u >> v;
		adj[u].pb(v);
		r_adj[v].pb(u);
	}
	FOR(i,1,n){
		if (!visited[i]) dfs1(i);
	}
	rs(visited,0);
	vi a;
	while (!st.empty()){
		int u=st.top(); st.pop();
		if (!visited[u]){
			a.pb(u);
			dfs2(u); cnt++;
		}
	}
	if (cnt==1) cout <<"YES\n";
	else{
		cout << "NO\n";
		
		cout << a[1] <<" " << a[0]<<endl;
	
	}
	}
