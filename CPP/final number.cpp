#include <bits/stdc++.h>
using namespace std;
int sumDigit(long long n)
	{
		long long sum=0;
		while (n>0||sum>9)
			{
				if (n==0)
					{
						n=sum;
						sum=0;
					}
				sum+=n%10;
				n/=10;	
			}
		return sum;	
	}
int main()
	{
		long long t;
		cin>>t;
		while (t--)
			{
				long long n;
				cin>>n;
				int sum=sumDigit(n);
				cout <<sum<<endl;
			}
		}	