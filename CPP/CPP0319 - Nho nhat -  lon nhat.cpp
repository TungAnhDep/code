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
	int m,s; cin >> m >> s;
	vector <int> be,lon;
	int tmp = s;
	if (s>9*m || (s==0 && m>1)){
		cout <<"-1 -1\n";
		return 0;
	}
	for (int i=0;i<m;i++){
		if (s>=9){
			lon.push_back(9);
			s-=9;
		}
		else{
			lon.push_back(s);
			s=0;
		}
	}
	tmp--;
	for (int i=0;i<m-1;i++){
		if (tmp>=9){
			be.push_back(9);
			tmp-=9;
		}
		else{
			be.push_back(tmp);
			tmp=0;
		}
	}
	be.push_back(tmp+1);
	reverse(be.begin(), be.end());
	for (int i=0;i<m;i++) cout << be[i];
	cout << " ";
	for (int i=0;i<m;i++) cout << lon[i];
	cout << endl;
}
