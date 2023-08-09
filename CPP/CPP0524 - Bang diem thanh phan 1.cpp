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

int tmp=0;
vector<string> v;
struct SinhVien{

		string msv,ten,lop;
		float d1,d2,d3;
	
	
		
		
			
};
void nhap(SinhVien &a){
	
	cin.ignore();
	getline(cin,a.msv);
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin >> a.d1 >> a.d2 >> a.d3;
}
void in_ds(SinhVien a[], int n){
	for (int i=0;i<n;i++) 
		cout << i+1 <<" " << a[i].msv <<" " << a[i].ten <<" " << a[i].lop << " " << fixed <<setprecision(1) << a[i].d1 << " " << a[i].d2 <<" " <<a[i].d3 << endl;
}
bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}
void sap_xep  (SinhVien a[], int n){
			sort(a,a+n,cmp);
		}
int main(){
	int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
