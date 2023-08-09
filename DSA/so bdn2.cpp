#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll n)
    {
        queue <ll> q;
        
        q.push(1);
        while (!q.empty())
            {
                ll top = q.front(); q.pop();
                q.push(top*10);
                if (q.front() % n == 0) 
                	{
                		cout << q.front() << endl;
                		break;
					}
                q.push(top*10+1);
                if (q.front() % n ==0)
                	{
                		cout << q.front() << endl;
                		break;
					}
            }
    }
int main()
    {
        int t; cin >> t;
        while (t--)
        	{
        		int n; cin >> n;
        		solve(n);
			}
            }

