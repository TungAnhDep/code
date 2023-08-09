#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int t; cin >> t;
        while (t--)
            {
                string s; cin >> s;
                stack <int> st;
                for (int i = s.size()-1;i>=0;i--)
                    {
                        if (isdigit(s[i])) st.push((int)(s[i]-'0'));
                        else
                            {
                                int pos1 = st.top(); st.pop();
                                int pos2 = st.top(); st.pop();
                                if (s[i]=='+') pos1+=pos2;
                                else if (s[i]=='-') pos1-=pos2;
                                else if (s[i]=='*') pos1*=pos2;
                                else if (s[i]=='/') pos1/=pos2;
                                else if (s[i]=='%') pos1%=pos2;
                                else if (s[i]=='^') pos1 = pow(pos1,pos2);
                                st.push(pos1);
                            }

                    }
                cout << st.top() << endl;    
            }
    }