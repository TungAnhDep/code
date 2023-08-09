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
vi adj[1001];
int color[1001];
bool dfs(int u, int par){
	color[u]=1-color[par]; // 2 dinh co canh noi thi nguoc mau nhau
	for (int v:adj[u]){
		if (color[v]==-1) { // Dinh v chua duoc to mau
			if (!dfs(v,u)) return false;
		}
		else if (color[v]==color[u]) return false; // Neu 2 dinh ke cung mau nhau thi khong phai do thi 2 phia
	}
	return true;
}
int main(){
	faster();
	tester(){
		int n,m; cin >> n >> m;
		rs(adj,0);
		rs(color,-1);
		FOR(i,1,m){
			int u,v; cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		color[0]=0;
		bool ok=true;
		FOR(i,1,n){
			if (color[i]==-1){
				if (!dfs(i,0)){
					ok=false; break;
				}
			}
		}
		if (ok) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
	
}
