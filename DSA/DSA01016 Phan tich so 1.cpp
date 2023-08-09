#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, cnt,ok, a[100];
void ktao()
	{
		cnt=1;
		a[1]=n;
	}
void sinh()
	{
		int i=cnt;
		int cnt2=0;
		while (i>=1 && a[i]==1)
			{
				cnt2++;
				i--;
			}
		if (i==0) ok=0;
		else
			{
				a[i]--;
				cnt=i;
				int d= cnt2+1;
				int q=d/a[i];
				int r=d%a[i];
				if (q)
					{
						for (int j=1;j<=q;j++)
							{
								cnt++;
								a[cnt]=a[i];
							}
					}
				if (r)
					{
						cnt++;
						a[cnt]=r;
						}	
				}	
	}
	
int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t; cin >> t;
		while (t--)
			{
				cin >> n;
				ktao();
				ok=1;
				while (ok)
					{	int count=0;
						cout <<"(";
						for (int i=1;i<=cnt;i++)
							{	count++;
								
							}
						for (int i=1;i<=cnt;i++)
							{
								if (i!=cnt) cout <<a[i]<<" ";
								else cout <<a[i];
								}	
						cout <<")";
						cout <<" ";
						sinh();	
					}
				cout << endl;	
			}
		}	
