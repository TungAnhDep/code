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
				int m, n; cin >> m >> n;
				int a[m], b[n];
				set <int> se1,se2;
				for (int &x:a) 
					{
						cin >> x;
						se1.insert(x);
					}
				for (int &x:b) 
					{
						cin >> x;
						se1.insert(x);
						se2.insert(x);
					}
				vector<int> v;
				for (int x:a)
					{
						if (se2.find(x)!=se2.end()) v.push_back(x);
						}
				for (auto x:se1) cout << x <<" ";
				cout << endl;
				for (int it:v) cout << it <<" ";
				cout << endl;			
				
			}
		}	
