
#include <bits/stdc++.h>
using namespace std;
long long nto(long long n)
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
				int a,b;
				cin >>a>>b;
				if (a>b) swap(a,b);
				for (int i=a;i<=b;i++)
					{
						if (nto(i)) cout <<i<<" ";
						
					}
				cout <<endl;	
				}	
		}	
