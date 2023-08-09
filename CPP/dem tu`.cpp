#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				string s;
				scanf("\n");
				getline(cin,s);
				int count=0;
				stringstream ss(s);
				string temp;
				while (ss>>temp)
					{
						count++;
					}
				cout <<count<<endl;	
			}
			
	}
