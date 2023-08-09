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
ll merge(ll a[], int l, int m, int r){
	vector<ll> x(a+l,a+m+1);
	vector<ll> y(a+m+1,a+r+1);
	int i=0,j=0; ll dem=0;
	while (i<x.size() && j<y.size()){
		if (x[i] <=y[j]){
			a[l]=x[i];l++;i++;
		}
		else{
			dem+=x.size()-i;
			a[l]=y[j];
			j++;l++;
		}
	}
	while(i<x.size()){
		a[l]=x[i];l++;i++;
	}
	while (j<y.size()){
		a[l]=y[j];l++;j++;
	}
	return dem;
}
ll mergeSort(ll a[], int l, int r){
	ll dem=0;
	if (l<r){
		int m = (l+r)/2;
		dem+=mergeSort(a,l,m);
		dem+=mergeSort(a,m+1,r);
		dem+=merge(a,l,m,r);
	}
	return dem;
}
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	ll a[n]; for (ll &x:a) cin >> x;
    	cout << mergeSort(a,0,n-1) << endl;
	}
}

