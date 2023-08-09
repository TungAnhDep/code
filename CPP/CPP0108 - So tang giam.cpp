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
int a[10] = {0, 0, 20, 38, 50, 38, 20, 8, 5, 0};

int nto(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return n>1;
}
int kt(int n){
	int tmp1 = n%10;
	n/=10;
	int tmp2 = n%10;
	n/=10;
	if (tmp1 == tmp2) return 0;
	if (!n) return tmp2 > tmp1 || tmp1 > tmp2;
	if (tmp1 > tmp2){ 
		while (n){
			if (n%10 >= tmp2) return 0;
			tmp2=n%10;
			n/=10;
		}
	}
	else{
		while (n){
			if(n%10 <=tmp2) return 0;
			tmp2=n%10;
			n/=10;
		}
	}
	return 1;
}

int main(){
	tester(){
		int n; cin >> n;
		cout << a[n] << endl;
		continue;
		int cnt=0;
		for (int i=pow(10,n-1); i<pow(10,n);i++){
			if (nto(i) && kt(i)){
				 cnt++;
			}
		}
		cout << cnt << endl;
		
	}
}
