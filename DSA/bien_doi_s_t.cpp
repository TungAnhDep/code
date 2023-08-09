#include <bits/stdc++.h>
using namespace std;
int solve(int s, int t)
	{
		queue <pair<int,int>> q;
		q.push({s,0});
		map<int,int> mp;
		mp.insert({s,1});
		while (!q.empty())
			{
				pair<int,int> top = q.front(); q.pop();
				if (top.first == t) return top.second;
				if (top.first *2 == t || top.first - 1 == t) return top.second + 1;
				if (mp[top.first * 2] == 0 && top.first < t)
					{
						q.push({top.first * 2, top.second + 1});
						mp[top.first * 2]++;
					}
				if (mp[top.first - 1] == 0 && top.first > 1)
					{
						q.push({top.first -1 , top.second + 1});
						mp[top.first - 1]++;
					}	
			}
	}
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				int s,t; cin >> s >> t;
				cout << solve(s,t) << endl;
			}
		}	
	
	
