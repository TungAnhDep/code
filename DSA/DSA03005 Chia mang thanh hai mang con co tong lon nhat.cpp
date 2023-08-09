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
				int n, k; cin >> n >> k;
				int a[n];
				for (int &x:a) cin >> x;
				sort(a,a+n);
				int sum1=0, sum2=0;
				for (int i=0;i<min(k,n-k);i++)
					{
						sum1+=a[i];
					}
				for (int i=min(k,n-k);i<n;i++)
					{
						sum2+=a[i];
						}	
				cout << max(sum1-sum2,sum2-sum1)<<endl;		
			}
		}	
