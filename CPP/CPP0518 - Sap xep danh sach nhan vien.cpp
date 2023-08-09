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
int no=0;
struct NhanVien{
	
	string mnv="000",ten,gioitinh,ns,add,ms,ky;	
};

void nhap(NhanVien &a){
	cin.ignore();
	no++;
	if (no < 10) a.mnv+="0" + to_string(no);
	else a.mnv = a.mnv + to_string(no);
	getline(cin,a.ten);
	cin >> a.gioitinh >> a.ns;
	cin.ignore();
	getline(cin,a.add);
	cin >> a.ms >> a.ky;
}
bool cmp(NhanVien a, NhanVien b){
	string s = a.ns, t=b.ns;
	int t1=(s[0]-'0')*10 + (s[1]-'0'), t2 = (t[0]-'0')*10 + (t[1]-'0');
	int n1 =(s[3]-'0')*10 + (s[4]-'0'), n2 = (t[3]-'0')*10 + (t[4]-'0');
	int na1 = stoi(s.substr(6)), na2=stoi(t.substr(6));
	if (na1 != na2) return na1 < na2;
	if (t1 != t2) return t1 < t2;
	return n1<n2;
}
void sapxep(NhanVien a[], int n){
	sort (a,a+n,cmp);
}
void inds(NhanVien a[], int n){
	for (int i=0;i<n;i++){
		cout << a[i].mnv <<" " << a[i].ten <<" " << a[i].gioitinh <<" " << a[i].ns <<" " << a[i].add <<" " << a[i].ms <<" " << a[i].ky;
		cout << endl;
	}
	
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds,N);
    inds(ds,N);
    return 0;
}
