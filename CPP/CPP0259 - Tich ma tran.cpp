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
int main(){
	int n,m,p; cin >> n >> m >> p;
	int a[n][m], b[m][p], c[n][p];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++) cin >> a[i][j];
	}
	for (int j=0;j<m;j++){
		for (int k=0;k<p;k++) cin >> b[j][k];
	}
	for (int i=0;i<n;i++){
		for (int k=0;k<p;k++){
			c[i][k]=0;
			for (int j=0;j<m;j++){
				c[i][k]+=a[i][j] * b[j][k];
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int k=0;k<p;k++) cout << c[i][k] <<" ";
		cout << endl;
	} 
}