#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
        {
            string s; cin >> s;
            stack <string> st;
            string res = "";
            for (int i = s.size()-1;i>=0;i--)
                {
                    if (s[i]=='+' || s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^')
                        {
                            string pos1 = st.top(); st.pop();
                            string pos2 = st.top(); st.pop();
                            res = pos1 + pos2 + s[i];
                            st.push(res);
                        }
                    else st.push(string(1,s[i]));    
                }
            cout << res << endl;    
        }
}