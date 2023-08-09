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
int main(){
	char a[15], b[15];
	a[0]='A';
	a[1]='B';
	a[2]='B';
	a[3]='A';
	a[4]='D';
	a[5]='C';
	a[6]='C';
	a[7]='A';
	a[8]='B';
	a[9]='D';
	a[10]='C';
	a[11]='C';
	a[12]='A';
	a[13]='B';
	a[14]='D';
	b[0]='A';
	b[1]='C';
	b[2]='C';
	b[3]='A';
	b[4]='B';
	b[5]='C';
	b[6]='D';
	b[7]='D';
	b[8]='B';
	b[9]='B';
	b[10]='C';
	b[11]='D';
	b[12]='D';
	b[13]='B';
	b[14]='B';
	int t; cin >> t;
	while (t--){
		int ma; cin >> ma;
		double count1=0, count2=0;
		if (ma==101){
			for (int i=0;i<15;i++){
				char dapan; cin >> dapan;
				if (dapan==a[i]) count1++;
			}
		cout << fixed << setprecision(2) << count1/15 * 10 << endl;
		}
		else if (ma==102){
			for (int i=0;i<15;i++){
				char dapan; cin >> dapan;
				if (dapan==b[i]) count2++;
			}
			cout << fixed << setprecision(2) << count2/15 * 10 << endl;
		}
	}
}

