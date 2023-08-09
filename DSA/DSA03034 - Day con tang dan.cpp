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
				int n,m,k; cin >> n >> m >> k;
				ll a[n], b[m], c[k];
				for (ll &x:a) cin >> x;
				for (ll &x:b) cin >> x;
				for (ll &x:c) cin >> x;
				vector <ll> v;
				int i=0,j=0,h=0;
				while (i<n && j<m && h<k)	
					{
						if (a[i]==b[j] && b[j]==c[h])
							{
								v.push_back(a[i]);
								i++;j++;h++;
							}
						else if (a[i]>b[j])	
							{
								j++;
							}
						else if (b[j]>c[h])
							{
								h++;
							}		
						else if (c[h]>a[i])
							{
								i++;
							}	
					}
				if (v.size()==0) cout <<"NO";
				else
					{
						for (ll x:v)
							{
								cout << x <<" ";
							} 
					}
				cout << endl;		
				
			}
		}	
