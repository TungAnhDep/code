#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t; cin >> t;
		while (t--)
			{
				int n; cin >> n;
				ll k; cin >> k;
				ll a[n];
				map <ll,ll> mp;
				for (ll &x:a)
					{
						cin >> x;
						mp[x]++;
					}
				int ans = 0;	
				for (int i=0;i<n;i++)	
					{
						ans+= mp[k-a[i]]; // Dem so lan xuat hien cua so' k-a[i]
						if (a[i] * 2 ==k) ans--; // Neu nhu 2 so trung nhau thi chi tinh 1 lan xuat hien
					}
				 cout << ans/2 << endl;	//In so cap
					
			}
		}	
