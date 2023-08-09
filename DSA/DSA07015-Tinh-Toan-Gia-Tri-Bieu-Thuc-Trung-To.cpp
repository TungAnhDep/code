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
	if (c=='^') return 3;
	else if (c=='%'||c=='/'||c=='*') return 2;
	else if (c=='+' || c=='-') return 1;
	return 0;
}
void solve(){
	string s; cin >> s;
	stack <ll> value;
	stack <char> opera;
	for (int i=0;i<s.size();i++){
		if (isdigit(s[i])){
			ll val=0;
			while (i<s.size() && isdigit(s[i])){
				val=val*10 + (s[i]-'0');
				i++;
			}
			value.push(val);
		i--;	
		}
		else if (s[i]=='(') opera.push(s[i]);
		else if (s[i]==')'){
			while (!opera.empty() && opera.top()!='('){
				ll val1=value.top(); value.pop();
				ll val2=value.top(); value.pop();
				char c = opera.top(); opera.pop();
				ll res=0;
				if (c=='+') res=val2+val1;
				else if (c=='-') res=val2-val1;
				else if (c=='*') res=val2*val1;
				else if (c=='/' && val1!=0) res=val2/val1;
				value.push(res);  
			}
			opera.pop();
		}
		else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
			while (!opera.empty() && ope(opera.top()) >= ope(s[i])){
				ll val1=value.top(); value.pop();
				ll val2=value.top(); value.pop();
				char c = opera.top(); opera.pop();
				ll res=0;
				if (c=='+') res=val2+val1;
				else if (c=='-') res=val2-val1;
				else if (c=='*') res=val2*val1;
				else if (c=='/' && val1!=0) res=val2/val1;
				value.push(res);  
			}
			opera.push(s[i]);
		}
	}
	while (!opera.empty()){
					ll val1=value.top(); value.pop();
				ll val2=value.top(); value.pop();
				char c = opera.top(); opera.pop();
				ll res=0;
				if (c=='+') res=val2+val1;
				else if (c=='-') res=val2-val1;
				else if (c=='*') res=val2*val1;
				else if (c=='/' && val1!=0) res=val2/val1;
				value.push(res);  
	}
ll top=value.top(); value.pop();
	cout << top << endl;
}
int main(){
	faster();
	tester(){
		
		solve();
	}
}
