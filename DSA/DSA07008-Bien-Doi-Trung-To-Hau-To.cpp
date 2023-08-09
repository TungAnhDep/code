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
int ope(char c){
	if (c=='^') return 5;
	else if (c=='%'|| c=='*' || c=='/') return 4;
	else if (c=='+'|| c=='-') return 3;
	return 0;
}
void solve(){
	string s; cin >> s;
	stack<char> st;
	string res="";
	for (int i=0;i<s.size();i++){
		if (s[i]>='a' && s[i]<='z') res+=s[i]; // Neu nhu la toan hang
		else if (s[i]>='A' && s[i] <='Z') res+=s[i]; // Neu nhu la toan hang
		else if (s[i]=='(') st.push(s[i]);
		else if (s[i]==')'){
			while (!st.empty() && st.top()!='('){
				char top = st.top(); st.pop();
				res+=top;
			}
			st.pop();
		}
		else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^'){
			while (!st.empty() && ope(st.top()) >= ope(s[i])){
				res+=st.top(); st.pop();
			}
			st.push(s[i]);
		}
	}
	while (!st.empty()){
		if (st.top()!='('){
			res+=st.top();
		}
		st.pop();
	}
	cout << res << endl;
}
int main(){
	faster();
	tester(){
		solve();
	}
}
