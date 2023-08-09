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
	while(t--)
		{
			int n,v;
			cin >> n >> v;
			int a[n+1],c[n+1];
			for (int i=1;i<=n;i++) cin >> a[i];
			for (int i=1;i<=n;i++) cin >> c[i];
			int dp[n+1][v+1];
			
			for (int j=1;j<=v;j++)
				dp[0][j]=0;
			for (int i=1;i<=n;i++)
				dp[i][0]=0;
			for (int i=1;i<=n;i++)
				{
					for (int j=1;j<=v;j++)
						{
							dp[i][j] = dp[i-1][j]; // Khong lua chon do vat i
							if (j>=a[i]) dp[i][j] = max(dp[i][j], (dp[i-1][j-a[i]])+c[i]); // Co the dua do vat i vao trong tui
							// Neu cai tui trong luong j lon hon trong luong cua do` a[i]
						}
					}
			cout << dp[n][v] << endl;			
		}
}

