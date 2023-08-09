#include <bits/stdc++.h>
using namespace std;
void viethoa(string &s)
	{
		for (int i=0;i<s.size();i++)
			{
				s[i]=toupper(s[i]);
			}
	}
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
		vector<string> v;
		stringstream ss(s);
		string tmp;
		while (ss>>tmp)
			{
				v.push_back(tmp);
			}
		int n=v.size();
		for (int i=0;i<n-1;i++)
			{
				chuanhoa(v[i]);
				cout <<v[i];
				if (i==n-2) cout <<", ";
				else cout <<" ";
			}
		viethoa(v[n-1]);
		cout <<v[n-1]<<endl;	
		}	
