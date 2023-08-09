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
				int a[n][n];
				for (int j=1;j<=n;j++) cin >> a[n][j];
				int cot = n-1;
				for (int i=n-1;i>=1;i--)
					{
						for (int j=1;j<=cot;j++)
							{
								a[i][j]=a[i+1][j]+a[i+1][j+1];
							}
						cot--;	
					}
				cot = 1;
				for (int i=1;i<=n;i++)
					{	cout <<"[";
						for (int j=1;j<cot;j++)
							{
								
								cout << a[i][j]<<" ";
							}
						cout << a[i][cot]<<"]";
						cot++;	
						cout << " ";
						}	
				cout << endl;		
				
				
			}
		}	
