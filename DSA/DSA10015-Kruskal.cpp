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
#define sz size
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
int parent[1001],n,m,kichco[1001];

struct edge{
	int u,v; 
	int w;
};
vector <edge> canh;
bool cmp(edge a, edge b){
	return a.w < b.w;// Sap xep theo trong so tang dan
}
void inp(){
	FOR(i,1,m){
		int x,y,w; cin >> x >> y >> w;
		edge e;
		e.u=x; e.v=y; e.w = w;
		canh.pb(e);
	}
}
void make_set(){
	FOR(i,1,n){
		parent[i]=i;
		kichco[i]=1;
	}
}
int find(int v){
	if (v==parent[v]) return v;
	return parent[v]=find(parent[v]);
}
bool Union(int a, int b){
	a=find(a); b=find(b);
	if (a==b) return false;// Neu nhu khong the hop (cung thuoc 1 tap hop)
	if (kichco[a] < kichco[b]) swap(a,b);
	parent[b]=a;//Dai dien cua th kich co nho hon = voi th kich co lon hon
	return true;
}
void Kruskal(){
	// Tao 1 cay khung rong
	vector<edge> mst;
	int d=0;
	// Sap xep danh sach canh theo thu tu tang dan
	sort(all(canh), cmp);
	// Lap
	F(i,0,m){
		if (mst.size()==n-1) break;//Neu nhu cay khung da du n-1 canh
		edge e = canh[i];//Lay ra canh nho nhat
		if (Union(e.u,e.v)){ // Neu nhu co the hop 2 dinh cua canh e -> Khong thuoc cung 1 TPLT
			mst.pb(e);
			d+=e.w;// Trong so cay khung hien tai + them trong so canh e
		}
	}
	// if (mst.sz!=n-1) cout <<"Do thi khong lien thong\n";
	//else
	cout << d << endl;// In ra trong so cua cay khung
	// for (auto it:mst){ cout << it.u <<" "<< it.v <<" "<<it.w<<endl;}

	
}
int main(){
	faster();
	tester(){
		rs(parent,0);
		rs(kichco,0);
		canh.clear();
		cin >> n >> m;
		inp();
		make_set();
		Kruskal();
	}
}
