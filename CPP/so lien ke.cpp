#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				string s;
				cin >>s;
				int count=0;
				for (int i=0;i<=s.size()-2;i++)
					{
						if (abs(s[i+1]-s[i])!=1) count++;
					}
			if (count==0) cout <<"YES"<<endl;
			else cout <<"NO"<<endl;		
			}
		
	}
