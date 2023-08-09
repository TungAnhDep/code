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
int kt[1001], parent[1001],n,m;
vi adj[1001];
int find(int a){
	if (a==parent[a]) return a;
	return parent[a] = find(parent[a]); 
}
void Union(int a, int b){
	a=find(a), b=find(b);
	if (a!=b){
	
	if (kt[a]<kt[b]) swap(a,b);
	parent[b]=a;
	kt[a]+=kt[b];
}
}
void make_set(){
	FOR(i,1,n){
		parent[i]=i;
		kt[i]=1;
	}
}
void inp(){
	rs(kt,0);
	rs(parent,0);
	rs(adj,0);
	cin >> n >> m;
	
	FOR(i,1,m){
		int x,y; cin >> x >> y;
		adj[x].pb(y);
		
	}
}
bool check(){
	FOR(i,1,n){
		for (int v:adj[i]){
			int x=find(i);
			int y=find(v);
			if (x==y) return true;
			else Union(x,y);
		}
	}
	return false;
}
int main(){
	faster();
	tester(){
		inp();
		make_set();
		if (check()) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}
