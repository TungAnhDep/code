#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int t; cin >> t;
        while (t--)
            {
                int q; cin >> q;
                queue <int> que;
                while (q--)
                    {
                        int choice; cin >> choice;
                        
                        switch(choice)
                        {
                            case 1:
                                cout << que.size()<<endl;
                                break;
                            case 2:
                                if (que.empty()) cout <<"YES\n";
                                else cout <<"NO\n";
                                break;
                            case 3:
                                {
                                    int x; cin >> x;
                                    que.push(x);
                                    break;
                                }        
                            case 4:
                                {
                                    if (!que.empty()) que.pop();
                                    break;
                                }    
                            case 5:
                                {
                                    if (que.empty()) cout <<"-1\n";
                                    else cout << que.front()<<endl;
                                    break;
                                }    
                            case 6:
                                {
                                    if (que.empty()) cout <<"-1\n";
                                    else cout << que.back()<<endl;
                                    break;
                                }    
                        }
                    }
            }
    }