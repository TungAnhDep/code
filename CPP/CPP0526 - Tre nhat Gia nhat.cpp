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
class Person{
	private:
		string ten, ns;
	public:
		friend istream& operator >> (istream& in, Person &a){
			in >> a.ten >> a.ns;
			return in;
		}	
		friend ostream& operator << (ostream &out, Person a){
			out << a.ten;
			return out;
		}
		friend bool operator < (Person a, Person b){
			string s = a.ns, t=b.ns;
			int n1 = (s[0]-'0') * 10  + (s[1]-'0'); int n2=(t[0]-'0') * 10 + (s[1]-'0');
			int t1 = (s[3]-'0') * 10  + (s[4]-'0'); int t2=(t[3]-'0') * 10 + (t[4]-'0');
			int nam1=stoi(s.substr(6)), nam2=stoi(t.substr(6));
			if (nam1!=nam2) return nam1 < nam2;
			if (t1!=t2) return t1<t2;
			return n1<n2;
		}
};
int main(){
	int n; cin >> n;
	Person a[n];
	for (Person &x:a) cin >> x;
	sort(a,a+n);
	cout << a[n-1] << endl;
	cout << a[0] << endl;
}
