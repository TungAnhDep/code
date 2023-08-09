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
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t;
		int n; cin >> n;
		int a[n];
		for (int i=1;i<=n;i++) cin >> a[i];
		int s=0;
		int v[10000]={};
		for (int i=1;i<=n;i++)
			{
				v[a[i]] = v[a[i]-1]+1;
				s=max(s,v[a[i]]);
			}
		cout << n-s << endl;	
		}	
