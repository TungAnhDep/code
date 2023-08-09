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
    	int n; cin >> n;
    	int a[n];
    	for (int &x:a) cin >> x;
    	int m=0,idx=0,dem=0;
    	for (int i=0;i<n;i++){
    		m= a[i];
    		for (int j=i+1;j<n;j++){
    			if (a[j] <m){
    				m=a[j];
    				idx = j;
				}
			}
			if (a[i] > m){
				swap(a[i],a[idx]);
				dem++;
			}
		}
		cout << dem << endl;
	}
}

