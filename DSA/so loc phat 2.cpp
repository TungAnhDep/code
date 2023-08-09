#include <bits/stdc++.h>
using namespace std;
vector <string> res;
void solve()
    {
        res.push_back("6");
        res.push_back("8");
        queue<string> q;
        q.push("6");
        q.push("8");
        while(1)
            {
                string top = q.front();
                q.pop();
                if (top.size()==15) break;
                res.push_back(top + "6");
                res.push_back(top + "8");
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
                int cnt=0;
                vector <string> tmp;
                for (string x:res)
                    {
                        if (x.size()== n+1) break;
                        tmp.push_back(x);
                    }
                cout << tmp.size()<<endl;
                for (string x:tmp)
                    {
                        cout << x <<" ";
                    }    
                cout << endl;    
            }
    }    