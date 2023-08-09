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
struct PhanSo{
	ll tu, mau;
};
ll gcd(ll a, ll b){
	if (b==0) return a;
	return gcd(b,a%b);
}
ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}
void in(PhanSo p){
	cout << p.tu <<"/" << p.mau << endl;
}
PhanSo tong(PhanSo p, PhanSo q){
	PhanSo rut;
	ll boi = lcm(p.mau, q.mau);
	rut.tu = p.tu * (boi / p.mau) + q.tu * (boi/q.mau);
	rut.mau = boi;
	ll uoc = gcd(rut.tu, rut.mau);
	rut.tu/=uoc;
	rut.mau/=uoc;
	return rut;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
