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
	int t; cin >> t;
	while (t--)
		{
			int n,s;
			cin >> n >> s;
			int a[n+1];
			for (int i=1;i<=n;i++) cin >> a[i];
			bool dp[s+1];
			for (int i=1;i<=s+1;i++) dp[i]=false;
			dp[0]=true;
			for (int i=1;i<=n;i++)
				{
					for (int j=s;j>=a[i];j--)
						{
							if (dp[j-a[i]]==true) dp[j]=true;
						}
				}
			if (dp[s]) cout <<"YES\n";
			else cout <<"NO\n";	
		}
}

