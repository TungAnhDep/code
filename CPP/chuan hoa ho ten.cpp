#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s)
	{	s[0]=toupper(s[0]);
		for (int i=1;i<s.size();i++)
			{
				s[i]=tolower(s[i]);
			}
	}
int main()
	{
		int t;
		cin >>t;
		cin.ignore();
		while (t--)
			{
				string s;
				int cach;
				cin >>cach;
				cin.ignore();
				getline(cin,s);
				
				stringstream ss(s);
				string temp;
				vector<string>v;
				while (ss>>temp)
					{
						v.push_back(temp);
						}
				for (int i=0;i<v.size();i++)
					{
						chuanhoa(v[i]);
								}	
				
				int n=v.size();
				if (cach==1)
					{
					
						cout <<v[n-1]<<" ";
						for (int i=0;i<n-1;i++)
							{
								
								cout <<v[i];
								if (i!=n-2) cout <<" ";
							}
											}
				if (cach==2)
					{
							for (int i=1;i<n;i++)
								{
								
									cout <<v[i]<<" ";
									
									
								}
							
							cout <<v[0];	
								
																		}													
				cout <<endl;
				
	}

}
