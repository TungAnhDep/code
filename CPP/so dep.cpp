#include <bits/stdc++.h>
using namespace std;
int sothuannghich(string s)
	{
		int n=s.size();
		for (int i=0;i<n-1;i++)
			{
				if (s[i]!=s[n-i-1]) return 0;
			}
		return 1;	
	}
int checkchanle(string s)
	{
		int n=s.size();
		for (int i=0;i<n-1;i++)
			{
				if (s[i]%2!=0) return 0;
			}
		return 1;	
	}
	
	
int main()
	{
		int t;
		cin >>t;
		while(t--)
			{
				string s;
				cin >>s;
				if (sothuannghich(s)&&checkchanle(s)) cout <<"YES"<<endl;
				else cout <<"NO"<<endl;
			}
			}		
