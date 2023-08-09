#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;

int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t; cin >> t;
		while (t--)
			{
				int n; cin >> n;
				ll a[n];
				for (ll &x:a) cin >> x;
				priority_queue<ll,vector<ll>,greater<ll>> pq;
				for (int x:a) pq.push(x);
				int sum=0,res=0;
				while (pq.size()>1)
					{
						int top1=pq.top();pq.pop();
						int top2=pq.top();pq.pop();
						sum=((top1%m)+(top2%m))%m;
						res=((res%m)+(sum%m))%m;
						pq.push(sum);
					}
				cout << res << endl;	
			}
		}	
