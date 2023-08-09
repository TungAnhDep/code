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
	faster();
	tester(){
		int n; cin >> n;
		int a[n+1],b[n+1];
		FOR(i,1,n) cin >> a[i];
		stack<int> st;
		for (int i=1;i<=n;i++){
			if (st.empty()) st.push(i);
			else
				{
					while (!st.empty() && a[st.top()] < a[i]){
						b[st.top()] = a[i];
						st.pop();
					}
					st.push(i);
				}
		}
		while (!st.empty()){
			b[st.top()]=-1;
			st.pop();
		}
		for (int i=1;i<=n;i++) cout << b[i] <<" ";
		cout << endl;
	}
}
