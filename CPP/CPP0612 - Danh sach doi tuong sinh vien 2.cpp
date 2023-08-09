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
class SinhVien{
	private:
		string msv = "B20DCCN";
		string ten,lop,ns;
		float gpa;
	public:
		friend istream& operator >>(istream& in, SinhVien &a){
			in.ignore();
			dem++;
			if (dem < 10) a.msv+="00" + to_string(dem);
			else a.msv+="0" + to_string(dem);
			getline(in,a.ten);
			stringstream ss(a.ten);
			string tmp;
			string res;
			while (ss>>tmp){
				tmp[0] =toupper(tmp[0]);
				for (int i=1;i<tmp.size();i++) tmp[i] = tolower(tmp[i]);
				res+=tmp + " ";
		}
			a.ten = res;
			in >> a.lop >> a.ns;
			if (a.ns[2] !='/') a.ns="0" + a.ns;
			if (a.ns[5] !='/') a.ns.insert(3,"0");
			in >> a.gpa;
			return in;
		}	
		friend ostream& operator << (ostream &out, SinhVien a){
			out << a.msv <<" " << a.ten <<" " << a.lop <<" " << a.ns <<" " << fixed << setprecision(2) << a.gpa << endl;
			return out;
}
		
};


	
int main(){
  
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
