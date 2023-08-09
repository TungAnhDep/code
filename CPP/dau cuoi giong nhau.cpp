#include <iostream>
#include <string>
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
				for (int i=0;i<s.size();i++)
					{
						for (int j=i;j<s.size();j++)
							{
								if (s[i]==s[j]) count++;
							}
					}
				cout <<count<<endl;	
				
				
			}
	}
