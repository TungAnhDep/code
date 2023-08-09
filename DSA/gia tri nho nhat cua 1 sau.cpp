#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
    {
        int t; cin >> t;
        while (t--)
            {
                int k; cin >> k;
                string s; cin >> s;
                map<char,int> mp;
                for (char x:s)
                    {
                        mp[x]++;
                    }
                priority_queue <int> pq;
                for (auto it:mp) pq.push(it.second);
                while (k>0)
                    {
                        int top = pq.top(); pq.pop();
                        --top; --k;
                        pq.push(max(top,0));
                    } 
                ll ans = 0;
                while (!pq.empty())
                    {
                        ans += 1ll * pq.top() * pq.top();
                        pq.pop();  
                    }  
                cout << ans << endl;      
            }
    }