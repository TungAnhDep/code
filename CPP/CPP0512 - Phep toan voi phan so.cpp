#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const long long mod = 1e9 + 7;
#define faster() ios::sync_with_stdio(false); cin.tie(NUint); cout.tie(NUint);
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define aint(x) x.begin(), x.end()
#define vi vector<int>
#define vint vector<int>
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
//int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
//int lcm(int a,int b) { return a/gcd(a,b)*b; }
ll gcd(ll a, ll b){
	if (b==0) return a;
	return (b,a%b);
}
ll lcm(ll a, ll b){
	return (a*b)/gcd(a,b);
}
class PhanSo{
public:
	long long tu;
	long long mau;
	
	int UCLN(long long a, long long b){
		if (a % b != 0){
			return UCLN(b, a%b);
		}	
		else{
			return b;
		}
	}
	
	void RutGon(){
		int ucln = UCLN(tu, mau);
		tu /= ucln;
		mau /= ucln;
	}
};

void process(PhanSo a, PhanSo b){
	PhanSo c, d;
	c.tu = a.tu * b.mau	+ b.tu * a.mau;
	c.mau = a.mau * b.mau;
	c.RutGon();
	c.tu *= c.tu;
	c.mau *= c.mau;
	c.RutGon();
	cout<<c.tu<<"/"<<c.mau;
	
	d.tu = a.tu * b.tu;
	d.mau = a.mau * b.mau;
	d.RutGon();
	d.tu *= c.tu;
	d.mau *= c.mau;
	d.RutGon();
	cout<<" "<<d.tu<<"/"<<d.mau << endl;
}

int main(){
	int t;
	cin>>t;
	
	while (t--){
		PhanSo A;
		PhanSo B;
		
		cin>>A.tu>>A.mau>>B.tu>>B.mau;
		process(A, B);
	}	
	
	return 0;
}
