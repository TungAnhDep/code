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
int dem=0;
struct SinhVien{
	string msv = "B20DCCN";
	string ten,lop,ns;
	float gpa;
};
void nhap(SinhVien a[], int n){
	cin.ignore();
	for (int i=0;i<n;i++){
		dem++;
		if (dem < 10) a[i].msv+="00" + to_string(dem);
		else a[i].msv+="0" + to_string(dem);
		
		getline(cin, a[i].ten);
		stringstream ss(a[i].ten);
		string tmp;
		string res;
		while (ss>>tmp){
			tmp[0] =toupper(tmp[0]);
			for (int i=1;i<tmp.size();i++) tmp[i] = tolower(tmp[i]);
			res+=tmp + " ";
		}
		a[i].ten = res;
		
		cin >> a[i] . lop >> a[i].ns;
		cin.ignore();
		if (a[i].ns[2]!='/') a[i].ns="0" + a[i].ns;
		if (a[i].ns[5]!='/') a[i].ns.insert(3,"0");
		
		cin >> a[i].gpa;
		cin.ignore();
	}
}
void in(SinhVien a[], int n){
	for (int i=0;i<n;i++){
		cout << a[i].msv <<" " << a[i].ten << a[i].lop <<" " << a[i].ns <<" " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
