#include <bits/stdc++.h>
using namespace std;
int check(string str)
	{
		int n=str.length();
		int odd=0;
		int even=0;
		for (int i=0;i<n;i++)
			{
				if (i%2==0) odd+=(str[i]-'0');
				else even+=(str[i]-'0');
			}
		return ((odd-even)%11==0);
		
	
	}
int main()
	{
		int t;
		cin >>t;
		string str;
		while (t--)
			{
				cin >>str;
				if (check(str)) cout <<"1"<<endl;
				else cout<<"0"<<endl;
			}
		}	