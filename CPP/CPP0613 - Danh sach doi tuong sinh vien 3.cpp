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
int cnt = 0;

class SinhVien
{
    public:
    string msv, name, lop, bd;
    float gpa;
    public:
    SinhVien()
    {
        this -> msv = "B20DCCN0";
        this -> name = "";
        this -> lop = "";
        this -> gpa = 0;
        this -> bd = "";
    }
    friend istream &operator >> (istream &is, SinhVien &a)
    {
        ++cnt;
        scanf("\n");
        if(cnt < 10) a.msv += "0" + to_string(cnt);
        else a.msv += to_string(cnt);
        string s;
        getline(is, s);
        stringstream ss(s);
        while(ss >> s)
        {
            s[0] = toupper(s[0]);
            F(i, 1, s.length()) s[i] = tolower(s[i]);
            a.name += s;
            a.name += ' ';
        }
        a.name.erase(a.name.end() - 1);
        getline(is, a.lop);
        getline(is, a.bd);
        if(a.bd[2] != '/') a.bd = "0" + a.bd;
        if(a.bd[5] != '/') a.bd.insert(a.bd.begin() + 3, '0');
        is >> a.gpa;
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien &a)
    {
        cout << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.gpa << endl;
        return os;
    }
};

bool cmp(SinhVien &a, SinhVien &b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
