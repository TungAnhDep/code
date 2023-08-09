#include <bits/stdc++.h>
using namespace std;
void solve (int n)
    {
        queue <int> q;
        q.push(1);
        int count = 0;
        while (!q.empty())
            {
                int top = q.front();
                q.pop();
                if (top <= n)
                    {
                        count ++;
                        q.push(top*10);
                        q.push(top*10 + 1);
                    }
            }
        cout << count << endl;    
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