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
ll gcd(ll a, ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}
class PhanSo{
	private:
		ll m,n;
	public:
		PhanSo(ll p, ll q){
			p=this->m;
			q=this->n;
		}
		friend istream& operator >> (istream& in,  PhanSo &a){
			in >> a.m >> a.n;
			return in;
		}	
		friend ostream& operator << (ostream& out, PhanSo a){
			out << a.m <<"/" << a.n << endl;
			return out;
		}
		PhanSo operator + (PhanSo b){
			PhanSo tong(1,1);
			tong.m = this->m * b.n + this->n * b.m;
			tong.n = this->n * b.n;
			ll uoc = gcd(tong.m, tong.n);
			tong.m = tong.m / uoc;
			tong.n = tong.n / uoc;
			return tong;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
