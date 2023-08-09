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
struct ThucTap{
	int stt=0;
	string msv,ten,lop,email,dn;
};
set <string> v;
void nhap(ThucTap a[], int n){
		cin.ignore();

		for (int i=0;i<n;i++){
		a[i].stt=i+1;
		cin >> a[i].msv; 
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].email >> a[i].dn;
		cin.ignore();
		
		v.insert(a[i].dn);
		
	}
}
bool cmp(ThucTap a, ThucTap b){
	return a.msv < b.msv;
}

int main(){
	int n; cin >> n;
	ThucTap a[n];
	nhap(a,n);
	sort(a,a+n,cmp);
	int q; cin >> q;
	cin.ignore();
	if (q>5) return 0;
	
	while (q--){
		string res; cin >> res;
		cin.ignore();
		if (v.find(res) != v.end()){
			for (int i=0;i<n;i++){
				if (a[i].dn == res) cout << a[i].stt <<" " << a[i].msv <<" " << a[i].ten <<" " << a[i].lop << " " << a[i].email <<" " << a[i].dn << endl;
			}
		}
	}
	
}
