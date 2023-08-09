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
#define PI 3.141592653589793238
//string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
//string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
//ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
//ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
struct Point{
	double x1,y1,x2,y2,x3,y3;
	double a,b,c;
};
bool checkValid(Point k){
	
	return (k.a+k.b>k.c) && (k.b+k.c>k.a) && (k.a+k.c >k.b) && (k.a > 0) && (k.b >0) && (k.c>0); 
}
double dtichTam(Point k){
	return ((double)1/ (double)4) * (double)sqrt((k.a+k.b+k.c) * (k.a+k.b-k.c) * (k.b + k.c - k.a) * (k.a-k.b+k.c)); 
}
double bankinh(Point k){
	return k.a * k.b * k.c / (4 * dtichTam(k));
}
double dtichTron(Point k){
	return PI * bankinh(k) * bankinh(k);
}
int main(){
	tester(){
		Point k;
		cin >> k.x1 >> k.y1 >> k.x2 >> k.y2 >> k.x3 >> k.y3;
		k.a = (double)sqrt((k.x2-k.x1) * (k.x2-k.x1) + (k.y2-k.y1) * (k.y2-k.y1));
		k.b = (double)sqrt((k.x3-k.x2) * (k.x3-k.x2) + (k.y3-k.y2) * (k.y3-k.y2));
		 k.c = (double)sqrt((k.x3-k.x1) * (k.x3-k.x1) + (k.y3-k.y1) * (k.y3-k.y1));
		if (!checkValid(k)) cout <<"INVALID\n";
		else{
			cout << fixed << setprecision(3) << dtichTron(k) << endl;
		}
	}
}
