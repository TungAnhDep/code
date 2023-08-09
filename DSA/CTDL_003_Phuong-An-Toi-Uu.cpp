#include<bits/stdc++.h>
using namespace std;

int n,k,ok;
int a[10000];
int giatri[10000];
int trongluong[10000];

void inp(){
    for(int i=1;i<=n;i++){
        a[i] = 0;
        cin >> giatri[i];
    }
    for(int i=1;i<=n;i++){
        cin >> trongluong[i];
    }
}

void sinh(){
    int i=n;
    while(i>=0 && a[i]==1){
        a[i] = 0;
        --i;
    }
    if(i==0){
        ok=0;
    }else{
        a[i] = 1;
    }
}

void solve(){
    int FOPT = 0;
    ok=1;
    vector<string>v;
    while(ok){
        int fx = 0;// gia tri cua do vat 
        int b = 0;// trong luong cua cai tui
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                fx += giatri[i];
                b += trongluong[i];
            }
        }
        string c;
        if(b<=k){
            if(FOPT < fx){
                FOPT = fx;
                for(int i=1;i<=n;i++){
                    c = c + to_string(a[i]) + " ";
                }
                v.push_back(c);
            }
        }
        sinh();
    }
    cout << FOPT << endl;
    cout << v[v.size()-1];
}


int main(){
    cin >> n >> k;
    inp();
    solve();
}
