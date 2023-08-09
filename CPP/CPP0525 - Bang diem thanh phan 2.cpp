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

string tam;
vector<string> v;
struct SinhVien{

		string msv,ten,lop;
		float d1,d2,d3;
	
		friend istream& operator >>(istream& in, SinhVien &a){
			in.ignore();
			getline(in,a.msv);
			getline(in, a.ten);
			getline(in,a.lop);
			in  >> a.d1 >> a.d2 >> a.d3;
			
			return in;
		}
	
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ten < b.ten;
		}
		
			
};
int main(){
	int n; cin >> n;

	int stt=0;
	SinhVien a[n];
	for (int i=0;i<n;i++){
		
		cin >> a[i];
		
	}
	sort(a,a+n);
	for (int i=0;i<n;i++){
		
		cout << i+1 <<" " << a[i].msv <<" " << a[i].ten <<" " << a[i].lop <<" " <<fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 <<" " << a[i].d3 << endl;
	}
}
