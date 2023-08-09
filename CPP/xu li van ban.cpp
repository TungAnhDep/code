#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
	{
		s[0]=toupper(s[0]);
		for (int i=1;i<s.size();i++)
			{
				s[i]=tolower(s[i]);
			}
		
					
	}
int main()
	{
		string s;
		getline(cin,s);
		
		stringstream ss(s);
		vector<string> v;
		string tmp;
		while (ss>>tmp)
			{
				v.push_back(tmp);
			}
		for (int i=0;i<v.size();i++)
			{
				chuanhoa(v[i]);
				cout <<v[i]<<" ";
				if (v[i]=='.'||v[i]=='!'||v[i]=='?'&&i!=(v.size()-1))
					{
						
						v.erase(v.begin()+i);
						cout <<v[i+1]<<endl;
						
					}
			}
		}	
