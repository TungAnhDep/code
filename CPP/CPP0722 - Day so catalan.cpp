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
int x,y,d;
void extended (ll a, ll b){
	
	if (b==0){
		x=1; y=0; d=a;
	}
	else {
		extended(b,a%b);
		int tmp = x;
		x=y;
		y= tmp-a/b*y;
	}
	
}
ll inverse(ll a, ll m){
	extended(a,m);
	if(d !=1) return 0;
	return ((x%m)+m)%m;
}
int main(){
	int n; cin >> n;
	ll c[n+1], f[2*n+1];
	f[0]=1;
	c[0] = c[1] = 1;
	for (int i=1;i<=2*n;i++){
		f[i] = f[i-1]*i;
		f[i]%=mod;
	}
	for (int i=2;i<=n;i++){
		c[i] = (f[2*i] % mod) * (inverse(f[i] * f[i+1] % mod,mod) %mod) ;
		c[i]%=mod;
	}
	
	ll res = 0;
	for (int i=0;i<=n;i++){
		res += c[i] * c[n-i];
		res%=mod;
	}
	cout << res << endl;
}
