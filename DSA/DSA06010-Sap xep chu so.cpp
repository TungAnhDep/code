#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				int n; cin >> n;
				int a[n];
				for (int &x:a) cin >> x;
				set <int> se;
				for (int x:a)
					{
						while (x>0)
							{	
								se.insert(x%10);
								x/=10;
							}
					}
				for (int x:se) cout << x << " ";
				cout << endl;	
			}
		}	
