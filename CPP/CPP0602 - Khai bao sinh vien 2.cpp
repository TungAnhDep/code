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
class SinhVien{
	private:
		string msv = "B20DCCN001", ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			this->ten = this->lop = this->ns = "";
			this->gpa = 0;
		}
		friend istream& operator >>(istream &in, SinhVien &a){
			getline(in, a.ten);
			in >> a.lop >> a.ns >>a.gpa;
			if (a.ns[2]!='/') a.ns = "0" + a.ns;
			if (a.ns[5]!='/') a.ns.insert(3,"0");
			return in;
		}
		friend ostream& operator << (ostream &out, SinhVien a){
			out << a.msv <<" " <<a.ten <<" " <<a.lop <<" " << a.ns <<" " << fixed <<setprecision(2) << a.gpa << endl;
			return out;
		}	
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
