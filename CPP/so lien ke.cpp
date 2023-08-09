
#include <bits/stdc++.h>
using namespace std;

int main()
	{
		int t;
		do
			{
				cin >>t;
			} while (t<=0||t>20);
		while (t--)
			{
				string a[20];
				cin >>a;
				int b=a.length();
				for (int i=0;i<b;i++)
					{
						if pow((a[i]-a[i+1]),2)==1
							{
								cout <<"YES"<<endl;
								break;
							}
						else 
							{
								cout <<"NO"<<endl;
								break;
							}
							
					
					}
					
				}	
		}	
	
