#include <bits/stdc++.h>
using namespace std;

int main()
    {
        int t; cin >> t;
        while (t--)
            {
                string s; cin >> s;
                stack <int> st;
                
                for (int i=0;i<s.size();i++)
                    {
                        if (isdigit(s[i])) st.push((int)(s[i]-'0'));
                       else
                            {   
                                int pos1 = st.top(); st.pop();
                                int pos2 = st.top(); st.pop();
                                switch(s[i])
                                    {
                                        case '+': pos2 += pos1; break;
                                        case '-':  pos2 -= pos1; break;
                                        case '*':  pos2 *= pos1; break;
                                        case '/':  pos2 /= pos1; break;
                                        
                                    
                                
                                }   
                                st.push(pos2);
                            }
                       
                    }
                cout << st.top() << endl;
            }
    }