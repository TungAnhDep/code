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
int n,m,visited[1001],a[1001][1001],d[1001],truoc[1001];
vector<pair<int,int>> adj[1001];
void inp(){
	rs(adj,0);
	FOR(i,1,1001){
		FOR(j,1,1001){
			a[i][j]=1e9;
		}
		visited[i]=truoc[i]=0;
		d[i]=0;
	}
	cin >> n >> m;
	FOR(i,1,m){
		int x,y,w; cin >> x >> y >> w;
		a[x][y]=w;
		adj[x].pb({y,w});
		//adj[y].pb({x,w});
	}

}
bool bellman_ford(int s){
	FOR(v,1,n){
		d[v]=a[s][v];
		truoc[v]=s;
	}
	d[s]=0;
	visited[s]=1;
	FOR(k,1,n-2){
		FOR(v,1,n){
			if (v==s) continue;
				FOR(u,1,n){
					if (d[v] > d[u] + a[u][v]){
						d[v]=d[u]+a[u][v];
						truoc[v]=u;
					}
				}
			}
		}
	FOR(v,1,n){
		FOR(u,1,n){
			if (d[v] > d[u] + a[u][v]) return true;//Ton tai chu trinh am
		}
	}
	return false;

}
void truyvet(int s,int t){ // Truy vet duong di ngan nhat tu S den T
	vector<int> path;
	while (t!=s){
		path.pb(t);
		t=truoc[t];
	}
	path.pb(s);
	reverse(all(path));
	for(int x:path){
		cout << x <<" ";
		
	}
	cout << endl;
}
int main(){
	faster();
	tester(){
		inp();
		if (bellman_ford(1)) cout <<1;
		else cout << 0;
		cout << endl;
		truyvet(1,3);
		cout << endl;
	}
}
