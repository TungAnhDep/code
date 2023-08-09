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
				
				int a[n];
				for (int &x:a) cin >> x;
				map <int, int> mp;
				for (int x:a) mp[x]++;
				int max_fre = 0;
				int value = 0;
				for (auto it:mp)
					{
						if (max_fre < it.second)
							{
								max_fre = it.second;
								value = it.first;
							}
					}
				if (max_fre > n/2) cout << value << endl;
				else cout <<"NO\n";	
			}
		}	
