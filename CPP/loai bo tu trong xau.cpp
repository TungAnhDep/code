#include <bits/stdc++.h>
using namespace std;
int main()
	{
		string s;
		getline(cin,s);
		string s1;
		getline(cin,s1);
		stringstream ss(s);
		vector <string> v;
		string temp;
		while (ss>>temp)
			{
				v.push_back(temp);
			}
		for (string x : v)
			{
				if (x!=s1) cout <<x<<endl;
			}
	}
	
