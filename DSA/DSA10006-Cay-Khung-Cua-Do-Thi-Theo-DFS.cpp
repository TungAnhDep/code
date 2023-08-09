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
int n,m,s,visited[1001];
stack<int> st;
vi adj[1001];
void inp(){
	rs(visited,0);
	rs(adj,0);
	cin >> n >> m >> s;
	FOR(i,1,m){
		int x,y; cin >> x >>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}
void dfs(int u){
	int socanh=0;// Khoi tao so canh = 0
	vector<pair<int,int>> ST; // Khoi tao tap cay khung
	st.push(u); visited[u]=1;
	while (!st.empty()){
		int v = st.top(); st.pop();
		visited[v]=1;
		for (int x:adj[v]){
			if (!visited[x]){
				ST.pb({v,x});
				socanh++;
				visited[x]=1;
				st.push(v);
				st.push(x);
				break;
			}
		}
	}
	if (socanh<n-1) cout <<-1 << endl;
	else {
		for (auto x:ST){
			cout << x.first <<" " << x.second;
			cout << endl;
		}
	}
	
}
int main(){
	faster();
	tester(){
		inp();
		dfs(s);
	}
}
