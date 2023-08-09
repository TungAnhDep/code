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
	while (t--)
	{
		int n; cin >> n;
		ll x; cin >> x;
		ll a[n+5];
		ll res = -1;
		for (ll i=1;i<=n;i++)
			{
				cin >> a[i];
				if (a[i] <=x)
					{
						res = i;
					}
			}
    	cout << res << endl;
}
}

