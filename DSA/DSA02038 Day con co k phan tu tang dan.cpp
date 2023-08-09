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

int n,k,a[10000]={},b[10000];
vector<int> v;
void in()
	{
		for (int i=1;i<=k;i++)
			cout << v[a[i]-1]<<" ";
			
		cout << endl;
	}
void Try(int i)
	{
		for (int j = a[i-1]+1;j<=n-k+i;j++ )
			{
				a[i]=j;
				if (i==k) in();
				else Try(i+1);
			}
	}
int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t; cin >> t;
		
		while (t--)
			{
				cin >> n >> k;
				
				for (int i=1;i<=n;i++)
					{
						cin >> b[i]; 
						v.push_back(b[i]);
					}
				
				sort(v.begin(),v.end());
				
				Try(1);
				v.clear();
			}
		}	
