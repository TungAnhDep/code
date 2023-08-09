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
int visited[1001],n,m;
vi adj[1001];
vector<pair<int,int>> canh,ans;
void inp(){
	cin >> n >> m;
	FOR(i,1,m){
		int x,y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
		canh.pb({x,y});
	}
	rs(visited,0);
	sort(all(canh));
}
void dfs(int u, int s, int t){
	visited[u]=1;
	for (int v:adj[u]){
		if ((u==s && v==t)||(u==t && v==s)) continue; // Neu nhu canh dang xet bang voi s t thi bo qua
		if (!visited[v]) dfs(v,s,t);
	}
}
void canhcau(){
	
	for (auto it:canh){
		int tplt=0;
		int x=it.first, y=it.second;
		rs(visited,0);
		FOR(j,1,n){
			if (!visited[j]){
				tplt++;
				dfs(j,x,y);
			}
		}
		if (tplt>1){
			if (x>y) cout << y <<" " << x<<" ";
			else cout << x <<" " << y <<" ";
		}
	}
	
	
}
int main(){
	faster();
	tester(){
		canh.clear();
		rs(adj,0);
		inp();
		canhcau();
		cout << endl;
	}
}
