#include <bits/stdc++.h>
using namespace std;
int solve(string s)
	{
		int ans=0;
		int sum=0;
		for (char x:s)
			{
				if (isdigit(x)) 
					{
						sum=sum*10+x-'0';
					}
				else 
					{
						ans=ans+sum;
						sum=0;
						}	
						
			}
		ans=ans+sum;
		return ans;	
	}
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				string s;
				cin >>s;
				cout <<solve(s)<<endl;
			}
		}	
