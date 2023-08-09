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
				int a[n];
				priority_queue<int, vector<int>, greater<int>> pq;
				for (int &x:a)
					{
						cin >> x;
						pq.push(x);
					}
				int sum=0;	
				int kq=0;
				while (pq.size()>1)
					{
						int front1 = pq.top(); pq.pop();
						int front2 = pq.top(); pq.pop();
						sum=front1 + front2;
						kq+=sum;
						pq.push(sum);
						}
				cout << kq << endl;			
			}
		}	
