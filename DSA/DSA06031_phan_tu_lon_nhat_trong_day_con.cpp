#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
const ll mod = 10e7+9;
using namespace std;

int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    	int n,k; cin >> n >> k;
    	ll a[n];
    	
    	for (ll &x:a) cin >> x;
    	multiset <ll> ms;
    	for (int i=0;i<k;i++) ms.insert(a[i]);
    	for (int i=k;i<n;i++){
    		cout << *ms.rbegin() <<" ";
    		ms.erase(ms.find(a[i-k]));
    		ms.insert(a[i]);
		}
		cout << *ms.rbegin() << endl;
	}
}

