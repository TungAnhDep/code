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
struct SinhVien{
	string msv,ten,lop,email;
};
set <string> s;
void nhap(SinhVien a[], int n){
	for (int i=0;i<n;i++){
		cin >> a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].email;
		s.insert(a[i].lop);
		cin.ignore();
	}
}


int main(){
	int n; cin >> n;
	cin.ignore();
	SinhVien a[n];
	nhap(a,n);
	int q; cin >> q;
	cin.ignore();
	while (q--){
		string lp; cin >> lp;
		cin.ignore();
		if (s.find(lp)!=s.end()){
			cout <<"DANH SACH SINH VIEN LOP " << lp <<":\n";
			for (int i=0;i<n;i++){
				if (a[i].lop==lp) cout << a[i].msv <<" " << a[i].ten <<" " << a[i].lop <<" " << a[i].email << endl;
			}
		}
	} 
}
