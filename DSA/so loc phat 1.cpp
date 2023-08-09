#include <bits/stdc++.h>
using namespace std;
vector <string> v;
void solve()
    {
        v.push_back("6");
        v.push_back("8");
        queue<string> q;
        q.push("6");
        q.push("8");
        while (1)
            {
                string top = q.front();
                q.pop();
                if (top.size()==15) break;
                v.push_back(top + "6");
                v.push_back(top + "8");
                q.push(top + "6");
                q.push(top + "8");
            }
    }
int main()
    {
        int t; cin >> t;
        while (t--)
            {   solve();
                int n; cin >> n;
                vector<string> tmp;
                for (string x: v)
                    {
                        if (x.size()== n+1) break;
                        tmp.push_back(x);
                    }   
                reverse(tmp.begin(),tmp.end());
                for (string x: tmp)
                    {
                        cout << x << " ";
                    }    
                cout << endl;    
            }
    }    