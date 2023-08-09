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
bool tangchat(string s){
	for (int i=0;i<s.size()-1;i++){
		if (s[i] >= s[i+1]) return false;
	}
	return true;
}
bool bangnhau1(string s){
	for (int i=0;i<s.size()-1;i++){
		if (s[i] != s[i+1]) return false;
		
	}
	return true;
}
bool bangnhau2(string s){
	return s[0] == s[1] && s[1] == s[2] && s[3] == s[4];
}
bool locphat(string s){
	for (int i=0;i<s.size();i++){
		if (s[i] !='6' && s[i] !='8') return false;
	}
	return true;
}
int main(){
	tester(){
		string s; cin >> s;
		string tmp = s.substr(5,6);
		tmp.erase(3,1);
		if (tangchat(tmp) || bangnhau1(tmp) || bangnhau2(tmp) || locphat(tmp)) cout <<"YES\n";
		else cout <<"NO\n";
		
	}
}
