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
	tester(){
		int n1,n2,n3; cin >> n1 >> n2 >> n3;
		ll a[n1], b[n2], c[n3];
		for (ll &x:a) cin >> x;
		for (ll &x:b) cin >> x;
		for (ll &x:c) cin >> x;
		int i=0, j=0, k=0;
		vector <ll> v;
		while (i<n1 && j<n2 && k<n3){
			if (a[i] == b[j] && b[j] == c[k]){
				v.push_back(a[i]);
				
				i++; j++; k++;
			}
			else if (a[i] <= b[j] && a[i] <= c[k]) i++;
			else if (b[j] <= a[i] && b[j] <= c[k]) j++;
			else k++;
		}
		if (v.size()==0) cout <<"-1\n";
		else {
			for (ll x:v) cout << x <<" ";
			cout << endl;
		}
		
	}
		
	}

