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
				int k; cin >> k;
				string s; cin >> s;
				priority_queue<int> pq;
				map<char,int> mp;
				int sum=0;
				for (char x:s) mp[x]++;
				for (auto it:mp) pq.push(it.second);	
				if (k>s.size()) return 1;
				for (int i=0;i<k;i++)
					{
						int top = pq.top(); pq.pop();
						top--;
						pq.push(max(top,0));
					}
			
				while (!pq.empty())
					{
						sum+=pq.top() * pq.top();
						pq.pop();
							}		
				cout << sum << endl;		
						
			}
		}	
