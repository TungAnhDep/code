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
			int n=s.size();
			int count=0;
			for (int i=0;i<n;i++)
				{
					if (s[i]!=s[n-i-1]) count++;
				}
			if (count==0) cout <<"YES"<<endl;
			else cout <<"NO"<<endl;	
		}
}
