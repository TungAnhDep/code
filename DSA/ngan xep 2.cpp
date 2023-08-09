#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin >> t;
        stack <int> st;
        while (t--)
            {
                string s;
                cin >> s;
               
                if (s=="PUSH")
                    {
                        int x; cin >> x;
                        st.push(x);
                    }
                else if (s=="POP")
                    {
                        if (st.empty())st.pop();
                    }    
                else if (s=="PRINT")
                    {
                        if (st.empty()) cout <<"NONE\n";
                        else cout << st.top()<<endl;
                    }    
            }
    }