#include <iostream>
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
						if(s[i]!=0&&s[i]!=6&&s[i]!=8) count++;
					}
				if (count==0) cout <<"YES"<<endl;
				else cout <<"NO"<<endl;	
			}
	}
