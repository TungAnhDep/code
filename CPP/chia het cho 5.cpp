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
				
				int sum=0;
				for (int i=0;i<s.size();i++)
					{
						sum=((sum*2)+(s[i]-'0'))%5;
					}
				if (sum%5==0) cout <<"YES"<<endl;
				else cout <<"NO"<<endl;	
			}
	}
