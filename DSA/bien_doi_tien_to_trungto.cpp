#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int t; cin >> t;
        while (t--)
            {
                string s; cin >> s;
                stack <string> st;
                for (int i = s.size()-1;i>=0;i--)
                    {
                        if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='%'||s[i]=='^')
                            {
                                string pos1 = st.top(); st.pop();
                                string pos2 = st.top(); st.pop();
                                string tmp = "(" + pos1 + s[i] + pos2 + ")";
                                st.push(tmp);
                            }
                        else st.push(string(1,s[i]));    
                    }
                cout << st.top()<<endl;    
            }
    }