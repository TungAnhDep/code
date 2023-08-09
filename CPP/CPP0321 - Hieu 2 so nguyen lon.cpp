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
void sub(string a, string b){
	int n1 = a.size(), n2=b.size(), n=0;
	int x[n1], y[n1], z[n1];
	for (int i=0;i<n1;i++) x[i] = a[i]-'0';
	for (int i=0;i<n2;i++) y[i] = b[i] - '0';
	reverse(x,x+n1);
	reverse(y,y+n2);
	int nho = 0;
	for (int i=n2;i<n1;i++) y[i]=0;
	
	for (int i=0;i<n1;i++){
		int tmp = x[i] - y[i] - nho;
		if (tmp<0){
			nho=1;
			z[n] = 10 + tmp ;
			n++;
			
			
		}
		else{
			z[n]= tmp;
			n++;
			nho = 0;
		}
		
		
	}
	int ok = 0;
	for (int i=n-1;i>=0;i--){
//		if (ok==0 && z[i]){
//			ok=1;
//		}
		//if (ok) 
		cout << z[i];
	}
//	if (ok==0) cout <<"0";
	
	cout << endl;
}
int main(){
	tester(){
		string x,y; cin >> x >> y;
		if (x.size() > y.size() || (x.size() == y.size() && x>y))sub(x,y);
		else sub(y,x);
	}
}
