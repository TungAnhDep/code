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
	string s; 
	vector <string> v;
	while (cin >> s ) v.push_back(s);
//	stringstream ss(s);
//	string tmp;
	for (int i=0;i<v.size();i++){
		for (int j=0;j<v[i].size();j++) v[i][j] = tolower(v[i][j]);
	}
	int check=1; // check xem da gap dau ngat cau chua
	for (string x:v){
		if (x[x.size()-1] == '?' || x[x.size()-1] =='.' || x[x.size()-1] =='!'){
			if (check) x[0] = toupper(x[0]);
			x.erase(x.end()-1); // Xoa dau cau
			if (x!="") cout << x ; // Neu cau ko o cuoi in ra cau do xong xuong dong
			cout << endl;
			check = 1;
		}
		else{
			if (check){
				x[0] = toupper(x[0]);
				cout << x <<" ";
				
				check = 0;
			}
			else cout << x <<" ";
		}
	}
}
	
