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
ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}
class PhanSo{
	private:
		ll tu,mau;
	public:
		PhanSo(ll a, ll b){
			a = this->tu;
			b = this->mau;
		}
		friend istream& operator >> (istream& in, PhanSo &a){
			in >> a.tu >> a.mau;
			return in;
		}
		friend ostream& operator << (ostream& out, PhanSo a){
			out << a.tu <<"/" << a.mau << endl;
			return out;
		}
		void rutgon(){
			ll uoc = gcd(this->tu, this->mau);
			this->tu =this->tu /uoc;
			this->mau = this->mau/uoc;
		}
};
int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}