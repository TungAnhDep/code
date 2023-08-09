#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
	{
		return a<b;
	}
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				int n; cin >> n;
				int a[n];
				for (int &x:a) cin >> x;
				sort (a,a+n,cmp);
				int min = a[1]-a[0];
				for (int i=1;i<n-1;i++)
					{
						if (a[i+1]-a[i] <= min) 
							min = a[i+1] - a[i];
					}
				cout << min << endl;	
			}
		}	
