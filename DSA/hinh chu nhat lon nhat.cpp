#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
    {
        int t;
        cin >> t;
        while (t--)
            {   long long n; cin >> n;
                long long a[n]
                for (long long &x:a) cin >> x;
                stack <long long> st;
                long long i = 0;
                long long res = INT_MIN;
                while (i<n)
                    {
                        if (st.empty()||a[i]>a[st.top()])
                            {
                                st.push(i);
                                i++;
                            }
                        else
                            {
                                long long idx = st.top();
                                st.pop();
                                if (st.empty())
                                    {
                                        res = max(res, i* a[idx]);
                                    }
                                else
                                    {
                                        res = max(res, a[idx] * (i-st.top()-1));
                                    }    
                            }    
                    }
                while (!st.empty())
                    {
                        
                        
                            {
                                long long idx = st.top();
                                st.pop();
                                if (st.empty())
                                    {
                                        res = max(res, i* a[idx]);
                                    }
                                else
                                    {
                                        res = max(res, a[idx] * (i-st.top()-1));
                                    }    
                             }    
               
                    }
                 cout << res << endl;        
            }
    }