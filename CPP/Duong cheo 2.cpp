#include <iostream>
using namespace std;
int main()
	{
		int n;
		cin>>n;
		for (int i=1;i<=n;i++)
			{
				cout <<"*";
			}
		cout <<endl;
		for (int i=1;i<=n-1;i++)
			{
				for (int j=1;j<=n;j++)
					{
						if (j<n-i+1) cout <<"*";
						else cout <<"~";
					}
				cout <<endl;	
				}	
	}
