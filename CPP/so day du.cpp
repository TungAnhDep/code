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
				for (char x:s)
					{
						if (!isdigit(x)||s[0]==0) count++;
					}
				if (count!=0) cout <<"INVALID"<<endl;
				else 
					{
						set<char> se;
						for (char x:s)
							{
								se.insert(x);
							}
						if (se.size()==10) cout <<"YES"<<endl;
						else cout <<"NO"<<endl;
							
						}	
			}
	}
