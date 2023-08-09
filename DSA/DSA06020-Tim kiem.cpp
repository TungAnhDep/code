#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				int n,k; cin >> n >> k;
				int a[n];
				for (int &x:a) cin >> x;
				set <int> se;
				for (int x:a) se.insert(x);
				for (int x:se)
					{
						if (se.find(k) == se.end())
							{
								cout << "-1\n";
								break;
							}
						else
							{
								cout <<"1\n";
								break;
								}	
					}
			}
		}	
