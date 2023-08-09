#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[10000];
int check=1;
int used[10000];
int n;
void in()
	{
		for (int i=2;i<n;i++)
			{
				if ((a[i]==1 ||a[i]==5) && (a[i+1]!=1||a[i+1]!=5) && (a[i-1]!=1 || a[i-1] !=5))
					{
						check = 0;
					}
			}
		if (check==1)
			{
				for (int i=1;i<=n;i++)
					{
						cout << char(a[i]+64);
					}
				cout << endl;	
				}	
		check = 1;		
	}
void Try(int i)
	{
		for (int j=1;j<=n;j++)
			{
				if (used[j])
					{
						a[i]=j;
						used[j]=0;
						if (i==n) in();
						else Try(i+1);
						used[j]=1;
					}
			}
		}	
	
int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		char c; cin >> c;
		n = (int)(c-64);
		if (n<4 || n>8) return 0;
		for (int i=1;i<=n;i++) used[i]=1;	
		
		
		Try(1);
		}	
