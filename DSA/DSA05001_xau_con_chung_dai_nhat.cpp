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
    		string x,y; cin >> x >> y;
    		int m = x.size(),n=y.size();
    		x="x"+x; y="y"+y;
    		
    		int dp[m+1][n+1];
    		for (int i=1;i<=m;i++) dp[i][0]=0;
    		for (int i=1;i<=n;i++) dp[0][i]=0;
    		for (int i=1;i<=m;i++)
    			{
    				for (int j=1;j<=n;j++)
    					{
    						if (x[i] == y[j]) dp[i][j] = dp[i-1][j-1] + 1;
    						else 
    							dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
						}
				}
			cout << dp[m][n] << endl;	
		}
}

