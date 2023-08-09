#include <bits/stdc++.h>
using namespace std;
int ope(char s)
    {   if (s=='^') return 3;
        if (s=='*' || s=='/' || s=='%') return 2;
        if (s=='+'||s=='-') return 1;
        return 0;
    }
void solve()
    {   string s; cin >> s;
        string res = "";
        stack <char> st;
        for (int i=0;i<s.size();i++)
            {
                if (s[i]>='A' && s[i]<='Z') res+=s[i];
                else if (s[i]>='a'&& s[i]<='z') res+=s[i];
                else if (s[i]=='(') st.push(s[i]);
                else if (s[i]==')')
                    {
                        while (!st.empty() && st.top()!='(')
                            {
                                res+=st.top();
                                st.pop();
                            }
                        st.pop();    
                    }
                else if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]== '^')
                    {
                        while (!st.empty() && ope(st.top())>= ope(s[i]))
                            {
                                res+=st.top();
                                st.pop();
                            }
                        st.push(s[i]);    
                    }    
            }
        while (!st.empty())
            {
                if (st.top()!='(') 
                    {
                        res+=st.top();
                        
                    }
                st.pop();    
            }   
        cout << res << endl;     
    }
int main()
    {
        int t; cin >> t;
        while (t--)
            {
                solve();
            }
    }    