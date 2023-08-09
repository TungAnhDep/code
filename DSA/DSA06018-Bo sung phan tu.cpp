#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				int n;
				cin >> n;
				int a[n];
				for (int &x:a) cin >> x;
				sort(a,a+n);
				set<int> se;
				for (int x:a) se.insert(x);
				int min = a[0]; int max = a[n-1];
				int cnt = 0;
				for (int i=min;i<max;i++)
					{
						if (se.find(i) == se.end()) cnt++;
					}
				cout << cnt << endl;	
			}
		}	
