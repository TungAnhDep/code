#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int nto(int n)
	{
		if (n<2) return 0;
		for (int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
				
			}
		return 1;	
	}
int sumdigit(long long n)
	{	int digit;
		int sum=0;
		while (n>0)
					{
						digit=n%10;
						sum+=digit;
						n/=10;
					}
		return sum;			
		}	
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				long long n;
				cin >>n;
			
				
				int sum=sumdigit(n);
				if (nto(sum)) cout<<n<<endl;
				else cout<<"-1";	
			}
		}	