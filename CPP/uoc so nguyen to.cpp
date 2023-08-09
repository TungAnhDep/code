#include <bits/stdc++.h>
using namespace std;
int check(int n)
	{
		if (n<2) return 0;
		for (int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
				
			}
		return 1;	
	}
int main()
	{
		int t;
		cin>>t;
		while (t--)
			{
				int n;
				cin >>n;
				if (check(n)) cout<<n<<endl;
				else 
				{
				for (int i=2;i<=sqrt(n)*4;i++)
					{
						
							{	while (n%i==0&&check(i))
								{
								cout <<i<<" ";
								n/=i;}
							}
					}
				}
				cout <<endl;	
			}
		}	
	
