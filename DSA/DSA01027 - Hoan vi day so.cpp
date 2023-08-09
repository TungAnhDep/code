#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
int n, a[105], b[105], ok;
using namespace std;
void sinh(int a[])
	{
		int i=n-1;
		while (i>=1 && a[i]>a[i+1])
			{
				i--;
			}
		if (i==0) ok=0;
		else
			{
				int j=n;
				while (j>i && a[j] < a[i]) j--;
				swap(a[i],a[j]);
				int l=i+1,r=n;
				while (l<r)
					{
						swap(a[l],a[r]);
						l++;r--;
					}
				}	
	}

int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
    	
				cin >> n;
				ok=1;
				for (int i=1;i<=n;i++) a[i]=i;
				for (int i=1;i<=n;i++) cin >> b[i];
				sort(b+1,b+n+1);
				while (ok)
					{	for (int i=1;i<=n;i++)
						{
							cout << b[a[i]] <<" ";
						}
						cout << endl;
						sinh(a);
					}
				
				cout << endl;	
			
		}	
