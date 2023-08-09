#include <bits/stdc++.h>
using namespace std;
int nto(long long n)
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
		cin >>t;
		while (t--)
			{
				long long n;
				cin >>n;
				int check=0;
				for (int i=2;i<=n/2;i++)
					{
						if (nto(i)&&nto(n-i)) 
							{
								cout <<i<<" "<<n-i;
								check=1;
								break;
										
							}
						
					}
				if (check==0) cout <<"-1";	
				cout <<endl;	
			}
		}	
