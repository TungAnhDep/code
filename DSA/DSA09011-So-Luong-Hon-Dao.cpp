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
int n,m;
int a[1001][1001];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
void dfs(int i, int j){
	a[i][j]=0;
	for (int k=0;k<8;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if (i1>=1 && i1 <=n && j1>=1 && j1<=m && a[i1][j1]==1){
			dfs(i1,j1);
		}  
	}
}
int main(){
	faster();
	tester(){
		cin >> n >> m;
		FOR(i,1,n){
			FOR(j,1,m) cin >> a[i][j];
		}
		int cnt=0;
		FOR(i,1,n){
			FOR(j,1,m){
				if (a[i][j]==1){
					
					dfs(i,j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
